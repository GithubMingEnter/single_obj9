#pragma once
#include<atomic>
template<typename T>
class single_base
{

public:
    struct Init
    {
        Init()
        {
            std::cout<<"init\n";
            auto& count=RefCount();
            auto ori=count.fetch_add(1);
            if(ori==0)
            {
                T* ptr=single_base::Ptr();
                new (ptr) T();
            }
        }
        ~Init()
        {
            std::cout<<"~init\n";
            auto& count=RefCount();
            auto ori =count.fetch_sub(1);
            if(ori == 1)
            {
                T* ptr = single_base::Ptr();
                ptr->~T(); // note destroy
            }

        }

        static auto& RefCount()
        {
            static std::atomic<unsigned> res{0};
            return res;
        }
        Init(const Init&)=delete;
        Init& operator=(const Init& )=delete;
        
        /* data */

    };

    static T* Ptr()
    {
        //achieve in function 
        alignas(T) static char single_buf[sizeof(T)];//note []
        return reinterpret_cast<T*>(single_buf);
    }
protected:
    // single_base(single_base& )=delete;
    ~single_base()=default;
    single_base()=default;
    single_base(const single_base&)=delete;
    single_base& operator=(const single_base& )=delete;

    
};




