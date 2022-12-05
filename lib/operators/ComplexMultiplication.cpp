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
  double tempReal = (real * rhs.real()) - (imaginary * rhs.imaginary());
  double tempImaginary = (real * rhs.imaginary()) + (rhs.real() * imaginary);
  Complex productComplex = Complex(tempReal, tempImaginary);
  return productComplex;
}