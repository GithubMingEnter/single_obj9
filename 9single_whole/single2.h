#pragma once
#include"bits/stdc++.h"
#include"single_base.h"
#include"single1.h"

//继承基类模板类
class single2:public single_base<single2>
{
    friend single_base<single2>;//friend unit to convenient to call base class

private:
    single2():single_base<single2>()
    {
        std::cout<<"single2 construct"<<std::endl;
        val_=single1_obj.val_+1; //note difference, depend on single1
    }
    ~single2()
    {
        std::cout<<"single2 destroy"<<std::endl;
    }

public:
    int val_;
};
static single2::Init single2_init;
static single2& single2_obj = *single2::Ptr();




