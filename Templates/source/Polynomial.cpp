#include "Polynomial.h"

// int quadratic(int a, int b, int c, int x)
// {
//     return a*x*x + b*x + c;
// }

template<typename T>
T utilFunctions::quadratic(T a, T b, T c, T x)
{
    T ans = a*x*x + b*x + c;
    return ans;
}

template int utilFunctions::quadratic(int, int, int, int);
template double utilFunctions::quadratic(double, double, double, double);
template float utilFunctions::quadratic(float, float, float, float);


