
#include "single.h"

// static initialization order fiasco problem
auto single_obj2 = single_obj.val_;
int main(int argc, char** argv)
{
    std::cout<<"get value "<<single_obj.val_<<std::endl;
    /*  */
    std::cout<<"get value "<<single_obj2<<std::endl;

    return 0;
}


