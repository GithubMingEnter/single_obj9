

#include"single.h"

alignas(single) char single_buf[sizeof(single)];

single::Init::Init()
{
    auto& count = single::Init::refCount();
    auto ori = count.fetch_add(1);  //确保改变值是线程安全的
    if(ori==0) //constructor first time  note it is equal to 0
    {
        single* ptr=reinterpret_cast<single*>(single_buf);// transform single class
        new (ptr) single(81); ///placement new: have allocated a block of memory 
    }
}

single::Init::~Init()
{
    auto& count = single::Init::refCount();
    auto ori = count.fetch_sub(1);  //确保改变值是线程安全的
    if(ori==1) //release  ori==1 !!! ?
    {
        single* ptr=reinterpret_cast<single*> (single_buf);
        ptr->~single(); //deconstructor
    }
}