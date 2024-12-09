#include <iostream>

int main()
{
    #ifdef USE_LOG
    std::cout << "MACRO_TEST" << std::endl;
    #endif

    std::cout<<"1 + 2 = "<<1 + 2<<std::endl;

    return 0;
}