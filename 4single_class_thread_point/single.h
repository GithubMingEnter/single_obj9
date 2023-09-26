

#include"bits/stdc++.h"

class Noncopyable
{
    Noncopyable& operator=( const Noncopyable &rhs );
    Noncopyable( const Noncopyable &rhs );
protected:

    Noncopyable(){}
    virtual ~Noncopyable(){}
};

// it is also possible to inherit Noncopyable class to limit copy or move assignment
// class single : private Noncopyable
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
/*    return no static obj this time 每次调用getInstance函数时都会创建一个新的single类对象并返回。
因此，每次调用该函数时都会创建一个新的对象，而这些对象是相互独立的。释放时和普通对象一样
 static const single getInstance(int val)
    {
         single single_obj=single(val);
        return single_obj;
    } */

// use point to get single obj
    static const single* getInstance(int val)
    {
        static single single_obj(val);
        return &single_obj;
    }
    int val_;

};




extern const single* single_obj;