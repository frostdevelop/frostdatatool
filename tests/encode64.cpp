#include <iostream>
#include "datatool.h"

int main(int argc, char *argv[])
{
    std::string temp(argv[1]);
    std::cout<<dtt::b64encode(temp.c_str(),temp.size())<<std::endl;
    return 0;
}