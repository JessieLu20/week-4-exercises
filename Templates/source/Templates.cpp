#include <iostream>
#include "Polynomial.h"
#include "Fraction.h"

using namespace utilFunctions;
int main()
{
    int n_int = 5;
    int quad_int = quadratic(0, 2, 9, n_int);
    std::cout << quad_int << std::endl;

    //double d_quad_implicit = quadratic(1.4, 2, 3.9, 0.1); // This line will fail

    // Explicit instantiation for double
    double d_quad = quadratic(1.4, 2.0, 3.9, 0.1); 
    std::cout << d_quad << std::endl;

    // fix implicit
    double d_quad_implicit = quadratic<double>(1.4, 2, 3.9, 0.1);
    std::cout << d_quad_implicit << std::endl;

    return 0;
}