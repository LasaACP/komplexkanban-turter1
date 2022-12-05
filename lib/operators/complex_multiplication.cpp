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
#include "../include/Complex.h"
using namespace std;

Complex Complex :: operator *(Complex rhs))
{
  double temp_real = (real * rhs.real()) - (imaginary * rhs.imaginary());
  double temp_imaginary = (real * rhs.imaginary()) + (rhs.real() * imaginary);
  Complex product_complex = Complex(temp_real, temp_imaginary);
  return product_complex;
}