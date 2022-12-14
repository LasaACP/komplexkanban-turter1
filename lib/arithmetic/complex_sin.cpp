/*
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Title : complex_sin.cpp
Author : joseph Sunukjian
URL : NA
Description : Sin function for complex numbers
Created : Dec. 14th
Modified : Dec. 14th
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
*/
#include <cmath>
#include "../../include/Complex.h"

#define PI 3.1415926538979323846
#define EULER 2.71828182845904523536

Complex sin(Complex num)
{
  double temp_real = sin(num.r)*sinh(num.i);
  double temp_imaginary = -1*cos(num.r)*cosh(num.i);
  Complex numFinal = Complex(temp_real, temp_imaginary);
  return numFinal;
}