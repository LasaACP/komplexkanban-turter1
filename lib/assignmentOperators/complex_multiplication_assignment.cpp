/*
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Title : ComplexAddition.cpp
Author : F. Thompson
URL : NA
Description : The implementation of the multiplication assignment operator for Complex.h that was written by F. Thompson
Created : Nov. 28th
Modified : Dec. 14th
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
*/
#include <cmath>
#include "../../include/Complex.h"

#define PI 3.1415926538979323846
#define EULER 2.71828182845904523536

void Complex::operator*=(Complex rhs)
{
  r = (r * rhs.r) - (i * rhs.i);
  i = (r * rhs.i) + (rhs.r * i);
}