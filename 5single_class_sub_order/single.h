

#include"bits/stdc++.h"


class single 
{
public:
// 单例类的子类，作用是作为初始化类的实例的纽带,控制初始化顺序
    class Init{
    public:
        Init();
        Init(const Init&)=delete;
        Init& operator=(const Init&)=delete;
        ~Init();
    };
private:

    /* data */
    single(int val)
    {
        std::cout<<"construct"<<std::endl;
        val_=val;
    }


    single(const single& )=delete;    //delete copy constructor
    single& operator= (const single&)=delete; //delete assignment
public:
    //定义为公有是因为智能指针std::unique_ptr<single>在析构的时候需要有权限能够调用析构函数 
    // 虽然定义为公有，但由于所有的构造函数都是私有的，所以不能在类外部进行析构
    ~single()
    {
        std::cout<<"deconstruct"<<std::endl;
    }


    int val_;

};




extern std::unique_ptr<single> single_obj;