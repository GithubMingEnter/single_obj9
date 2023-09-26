
#include "single.h"

// static initialization order fiasco problem
// auto single_obj2 = single_obj->val_;
// 直接获取对象，下一次会调用上一步构造的对象，没有问题
auto single_obj3 = single::getInstance(41)->val_;
int main(int argc, char** argv)
{
    std::cout<<"get value "<<single_obj->val_<<std::endl;
    /*  */
    // std::cout<<"get value "<<single_obj2<<std::endl;
    
    std::cout<<"get value "<<single_obj3<<std::endl;
    return 0;
}


