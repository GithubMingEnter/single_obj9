
#include "single.h"
// 静态全局对象，防止不同文件的变量名称相同导致在链接的过程中重定义
static single::Init init;

static single& single_obj2 = single::getInstance();
auto single_val=single_obj2.val_;

int main(int argc, char** argv)
{

    std::cout<<"single_obj2.val_ = "<<single_obj2.val_<<std::endl;
    /*  */
    std::cout<<"single_val =  "<<single_val<<std::endl;

    std::cout<<"single::getInstance().val_ =  "<<single::getInstance().val_<<std::endl;

    return 0;
}


