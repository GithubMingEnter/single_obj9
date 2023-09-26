#include "single1.h"
#include "single2.h"

void fun();

int main(int argc, char** argv)
{
    std::cout << "from main 1 : " << single1_obj.val_ << '\n';
    std::cout << "from main 2 : " << single2_obj.val_ << '\n';
    fun();
    return 0;
}


/* output
init
single1 construct
init
single2 construct
init
init
from main 1 : 1
from main 2 : 2
from fun 1 : 1
from fun 2 : 2
~init
~init
~init
single2 destroy
~init
single1 destroy 
*/