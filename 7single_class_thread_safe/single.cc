#include"bits/stdc++.h"
#include"single.h"

single* single_obj; // don't utilize smart pointer

single::Init::Init()
{
    auto& count = single::Init::refCount();
    auto ori = count.fetch_add(1);  //确保改变值是线程安全的
    if(ori==0) //constructor first time  note it is equal to 0
    {
        single_obj=new single(6);
    }
}

single::Init::~Init()
{
    auto& count = single::Init::refCount();
    auto ori = count.fetch_sub(1);  //确保改变值是线程安全的
    if(ori==0) //release 
    {
        delete single_obj;
        single_obj = nullptr;
    }
}

