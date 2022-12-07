/*
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Title : ComplexSubtraction.cpp
Author : Addy Prairie
URL : NA
Description : The implementation for Complex.h that was written by 
Created : Nov. 28th
Modified : Dec. 11th
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
*/

#include "../../include/Complex.h"

Complex Complex::operator -(Complex rhs)
{
  return Complex(r - rhs.r, i - rhs.i);
}