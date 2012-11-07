#include <iostream>
#include <cstdlib>
#include "oneFeature.h"
#include "anotherFeature.h"

int main()
{
    int this_is_an_unused_variable; //should produce a warning
    int this_is_an_int_variable = 13; //should produce a warning
    float this_is_a_float_variable = 0; //should produce a warning
    this_is_a_float_variable = this_is_an_int_variable; //should produce a warning

    std::cout << "main()" << std::endl;
    std::cout << "pow(2.0,10.0): " << oneFeature<double>(2.0,10.0) << std::endl;
    std::cout << "sqrt(144): " << anotherFeature<unsigned int>(144) << std::endl;

    bool some_failure = false;

    if (some_failure)
         return EXIT_FAILURE;
    else
         return EXIT_SUCCESS;

    return 0;
}
