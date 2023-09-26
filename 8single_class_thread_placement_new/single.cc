#include"bits/stdc++.h"
#include"single.h"
// static data type
single* single::single_obj; 

single::Init::Init()
{
    auto& count = single::Init::refCount();
    auto ori = count.fetch_add(1);  //确保改变值是线程安全的
    if(ori==0) //constructor first time  note it is equal to 0
    {
        single_obj=new single(8);
    }
}

single::Init::~Init()
{
    auto& count = single::Init::refCount();
    auto ori = count.fetch_sub(1);  //确保改变值是线程安全的
    if(ori==1) //release  ori==1 !!! ?
    {
        delete single_obj;
        single_obj = nullptr;
    }
}