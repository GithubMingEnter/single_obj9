#include"bits/stdc++.h"
#include"single.h"


// global variable 
std::unique_ptr<single> single_obj;

single::Init::Init()
{
    if(single_obj==nullptr)
    {
        single_obj.reset(new single(5));
    }
}


