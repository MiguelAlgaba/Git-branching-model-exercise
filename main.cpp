#include <iostream>
#include <cstdlib>
#include "oneFeature.h"
#include "anotherFeature.h"
#include "oneClass.h"

char unused_function(){return 'a';} //this is an unused function

void leak()
{
    std::cout << "leak" << std::endl;

    int* i = new int(42);
}

int main()
{
    int this_is_an_unused_variable; //should produce a warning (unused variable)
    int this_is_an_int_variable = 13;
    float this_is_a_float_variable = 0; //should produce two warnings (unused variable / 'int' to 'float' conversion)
    this_is_a_float_variable = this_is_an_int_variable; //should produce a warning (int to float conversion)

    std::cout << "main()" << std::endl;
    std::cout << "pow(2.0,10.0): " << oneFeature<double>(2.0,10.0) << std::endl;
    std::cout << "sqrt(144): " << anotherFeature<unsigned int>(144) << std::endl; //should produce a warning (instantiation of sqrt function with 'unsigned int values'. Produces an 'unsigned int' from 'double' conversion warning)
    bool some_failure = false;

    //int a //this is a compiler error (missing ';')

    std::string abcde = "abcd" + 'e'; //unusual pointer arithmetic .. the abcde string will not get the value "abcde"

    leak(); //this is a memory leak

    oneClass dummyObject = oneClass();
    dummyObject.doSomething();

    if (some_failure)
         return EXIT_FAILURE;
    else
         return EXIT_SUCCESS;

    return 0;
}
