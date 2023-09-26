#include"single.h"


static unsigned single_count;//reference count
single* single_obj; // don't utilize smart pointer

single::Init::Init()
{
    ++single_count; //assume that it is not overflow
    if(single_count==1) //constructor first time 
    {
        single_obj=new single(6);
    }
}

single::Init::~Init()
{
    --single_count;
    if(single_count==0) //release 
    {
        delete single_obj;
        single_obj = nullptr;
    }
}

