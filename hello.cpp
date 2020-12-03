#include "hello.h"

#include <iostream>

void TestLib::hello( const std::string & name )
{
    std::cout << "Hello " << name << std::endl;
}
