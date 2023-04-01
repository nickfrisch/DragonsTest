#include "RealClass.h"
#include <iostream>

dragons::RealClass::RealClass(int arg)
{
    m_arg = arg;
}

void dragons::RealClass::PrintArg()
{
    std::cout << m_arg << std::endl;
}