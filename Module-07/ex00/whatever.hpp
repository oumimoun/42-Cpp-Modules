#ifndef WHATER_HPP 
#define WHATER_HPP

#include <iostream>

template < typename S>
void swap(S& a, S& b)
{
    S swp = a;
    a = b;
    b = swp;
}

template< typename T>
T min(T a, T b)
{
    if (a < b)
        return a;
    else if (b < a)
        return b;
    else
        return b;
}

template < typename T>
T max(T a, T b)
{
    if (a < b)
        return b;
    else if (b < a)
        return a;
    else 
        return b;
}

#endif