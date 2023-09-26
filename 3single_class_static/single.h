

#include"bits/stdc++.h"
class Noncopyable
{
    Noncopyable& operator=( const Noncopyable &rhs );
    Noncopyable( const Noncopyable &rhs );
protected:

    Noncopyable(){}
    virtual ~Noncopyable(){}
};

// 也可以继承 Noncopyable class to limit copy or move assignment
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

// 由于返回的是静态对象的引用，因此在多次调用该函数时，
// 每次返回的都是同一个静态对象的引用。也就是说，该静态对象只会在第一次调用该函数时创建，
// 以后每次调用该函数都会返回同一个对象的引用。因此，第二段代码中返回的对象是同一个，而不是独立的多个对象。
//释放时会遵循static变量规定

    static const single& getInstance(int val)
    {
        // static single single_obj=single(val); //fail to call assignment
        static single single_obj(val);
        return single_obj;
    }
    int val_;

};




// extern single single_obj;