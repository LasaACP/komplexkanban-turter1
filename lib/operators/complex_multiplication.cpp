/*
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Title : ComplexMultiplication.cpp
Author : Tate Smith
URL : NA
Description : The implementation for Complex.h that was written by 
Created : Nov. 28th
Modified : Dec. 11th
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
*/

#include <cmath>
#include "../../include/Complex.h"
using namespace std;

Complex Complex::operator *(Complex rhs)
{
  double temp_real = (r * rhs.r) - (i * rhs.i);
  double temp_imaginary = (r * rhs.i) + (rhs.r * i);
  Complex product_complex = Complex(temp_real, temp_imaginary);
  return product_complex;
}