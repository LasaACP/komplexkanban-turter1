/*
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Title : ComplexSubtraction.cpp
Author : F. Thompson
URL : NA
Description : The implementation of the subtraction operator for Complex.h that was written by F. Thompson
Created : Nov. 28th
Modified : Dec. 2nd
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
*/
#include <cmath>
#include "../../include/Complex.h"

#define PI 3.1415926538979323846
#define EULER 2.71828182845904523536

Complex Complex::operator-(Complex lhs, Complex rhs)
{
  Complex* difference = new Complex();
  sum->re = lhs.re - rhs.re;
  sum->im = lhs.im - rhs.im;
  return *difference;
}