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

    Fraction f1 = Fraction(1, 2);
    Fraction f2 = Fraction(3, 4);
    std::cout<<"The first number is "<<f1<<std::endl<<"The second number is "<<f2<<std::endl;

    // apply add
    Fraction ans1 = f1+f2;
    std::cout<<"The ans of f1+f2 = "<<ans1<<std::endl;

    // apply multiply
    Fraction ans2 = f1*f2;
    std::cout<<"The ans of f1*f2 = "<<ans2<<std::endl;


    return 0;
}