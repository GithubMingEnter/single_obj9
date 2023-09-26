

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

    ~single()
    {
        std::cout<<"deconstruct"<<std::endl;
    }


    int val_;

};
template<class T>
class m_unique_ptr:public std::unique_ptr<T>
{
    public:
     m_unique_ptr():std::unique_ptr<T>()
    {

    }

};



extern m_unique_ptr<single> single_obj;