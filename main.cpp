#include <iostream>
#include "oneFeature.h"

int main()
{
    std::cout << "main()" << std::endl;
    std::cout << "pow(2.0,10.0): " << oneFeature<double>(2.0,10.0) << std::endl;

    return 0;
}
