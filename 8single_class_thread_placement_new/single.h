#pragma once
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
        // atomic operation
        static std::atomic<unsigned>& refCount()
        {
           static std::atomic<unsigned> single_count(0);
           return single_count; 
        }
    };


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
    int val_;
private:
// pointer cannot be accessed outside class
    static single* single_obj;
public:
    //note use reference 
    static single& getInstance()
    {
        return *single_obj;

    }


};



