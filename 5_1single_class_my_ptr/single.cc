#include"bits/stdc++.h"
#include"single.h"


// global variable 
//0 initialization and  default initialization缺省初始化
m_unique_ptr<single> single_obj;

single::Init::Init()
{
    if(single_obj==nullptr)
    {
        single_obj.reset(new single(5));
    }
}




// undefined behavior 2 :only one deconstructor
/* 
construct
construct
single_obj2 = 5
single_obj->val_ = 5
deconstruct 
*/
// static single::Init init;
