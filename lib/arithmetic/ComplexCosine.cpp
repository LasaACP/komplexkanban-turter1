/*
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Title : ComplexCosine.cpp
Author : F. Thompson
URL : NA
Description : The implementation of the cosine complex math function for Complex.h that was written by F. Thompson
Created : Nov. 28th
Modified : Dec. 5th
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
*/
#include <cmath>
#include "../../include/Complex.h"

#define PI 3.1415926538979323846
#define EULER 2.71828182845904523536

Complex Complex::cos(Complex ang)
{
  double tempre = cos(ang.re)*cosh(ang.im);
  double tempim = -1*sin(ang.re)*sinh(ang.im);
  Complex numf = new Complex(tempre, tempim);
  return numf;
}