#ifndef __anotherFeature__
#define __anotherFeature__

#include <math.h>

template <class T>
T anotherFeature(T a)
{
    return sqrt(a)/*insert a bug*/+10000;
}

#endif //anotherFeature
