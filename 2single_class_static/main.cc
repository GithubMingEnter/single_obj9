
#include "single.h"


int main(int argc, char** argv)
{
    std::cout<<"get value "<<single::getInstance(10).val_<<std::endl;

    single *copy_obj= new single(single::getInstance(12)); //
    single *move_obj = new single(std::move(single::getInstance(11)));


    return 0;
}


