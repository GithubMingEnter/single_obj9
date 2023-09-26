#pragma once
#include"bits/stdc++.h"
#include"single_base.h"
//继承基类模板类
class single1:public single_base<single1>
{
    friend single_base<single1>;//friend unit to convenient to call base class

private:
    single1():single_base<single1>()
    {
        std::cout<<"single1 construct"<<std::endl;
        val_=1;
    }
    ~single1()
    {
        std::cout<<"single1 destroy"<<std::endl;
    }

public:
    int val_;
};
static single1::Init single1_init;
static single1& single1_obj = *single1::Ptr();




