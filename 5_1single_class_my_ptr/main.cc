
#include "single.h"
// 静态全局对象，防止不同文件的名称相同导致在链接的过程中重定义
static single::Init init;
//在调用single_obj2，子类 init已经初始化
auto single_obj2 = single_obj->val_;
int main(int argc, char** argv)
{
    std::cout<<"single_obj2 = "<<single_obj2<<std::endl;
    std::cout<<"single_obj->val_ = "<<single_obj->val_<<std::endl;
    /*  */
    return 0;
}


