#pragma once

// int quadratic(int a, int b, int c, int x);

#ifndef POLYNOMIAL_HPP
#define POLYNOMIAL_HPP

namespace utilFunctions
{
    template<typename T>
    T quadratic(T, T, T, T);

    //include the templated function implementation in the header file instead of a separate source file
    // T quadratic(T a, T b, T c, T x){
    //     T ans = a*x*x + b*x + c;
    //     return ans;
    // }
}


#endif