

#include"bits/stdc++.h"


class single 
{
private:

    /* data */
    single(int val)
    {
        std::cout<<"construct"<<std::endl;
        val_=val;
    }

    ~single()
    {
    std::cout<<"deconstruct"<<std::endl;
    }
    single(const single& )=delete;    //delete copy constructor
    single& operator= (const single&)=delete; //delete assignment
public:


    static const single& getInstance(int val)
    {
        // static single single_obj=single(val); //fail to call assignment
        static single single_obj(val);
        return single_obj;
    }
    int val_;

};




extern const single& single_obj;