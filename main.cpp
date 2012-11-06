#include <iostream>
#include <cstdlib>
#include "oneFeature.h"
#include "anotherFeature.h"

int main()
{
    std::cout << "main()" << std::endl;
    std::cout << "pow(2.0,10.0): " << oneFeature<double>(2.0,10.0) << std::endl;
    std::cout << "sqrt(144): " << anotherFeature<unsigned int>(144) << std::endl;

    bool some_failure = true;

    if (some_failure)
         return EXIT_FAILURE;
    else
         return EXIT_SUCCESS;

    return 0;
}
