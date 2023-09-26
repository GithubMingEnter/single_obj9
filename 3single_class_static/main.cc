
#include "single.h"


int main(int argc, char** argv)
{

    std::cout<<"get value "<<single::getInstance(10).val_<<std::endl;

    // single *copy_obj= new single(single::getInstance(12)); //but ist call copy constructor
/*  size_t res=0;
    for(int i=0;i<10000;i++)
    {
        res+=single::getInstance(12).val_+i; //在多线程程序中会频繁地进行加锁和解锁，消耗时间
    } */

    return 0;
}


