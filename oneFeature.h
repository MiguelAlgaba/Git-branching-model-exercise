#ifndef __oneFeature__
#define __oneFeature__

#include <math.h>

/*!
 *  This templated function returns base^exponent
 */
template <class T>
T oneFeature(T base,T exponent)
{
    return pow(base,exponent);
}

#endif //__oneFeature__
