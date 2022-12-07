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
#include "../../include/Complex.h"
using namespace std;

Complex Complex::operator /(Complex rhs) {
  double temp_real = ((r * rhs.r) + (i * rhs.i)) / ((rhs.r * rhs.r) + (rhs.i * rhs.i));
  double temp_imaginary = ((i * rhs.r) - (r * rhs.i)) / ((rhs.r * rhs.r) + (rhs.i * rhs.i));
  Complex quotient_complex = Complex(temp_real, temp_imaginary);
  return quotient_complex;
}

// - - - - - Other Functions Follow - - - - - - - - - - - -