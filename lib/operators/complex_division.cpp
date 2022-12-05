/*
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Title : ComplexMultiplication.cpp
Author : Tate Smith
URL : NA
Description : The implementation for Complex.h that was written by 
Created : Dec. 2nd
Modified : Dec. 2nd
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
*/

#include <cmath>
#include "../include/Complex.h"
using namespace std;

Complex Complex :: operator *(Complex rhs))
{
  double temp_real = ((real * rhs.real()) + (imaginary * rhs.imaginary())) / ((rhs.real() * rhs.real()) + (rhs.imaginary() * rhs.imaginary());
  double temp_imaginary = ((imaginary * rhs.real()) - (real * rhs.imaginary())) / ((rhs.real() * rhs.real()) + (rhs.imaginary() * rhs.imaginary());
  Complex quotient_complex = Complex(temp_real, temp_imaginary);
  return quotient_complex;
}

// - - - - - Other Functions Follow - - - - - - - - - - - -