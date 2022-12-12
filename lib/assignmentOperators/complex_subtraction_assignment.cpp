/*
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Title : complex_addition_assignment.cpp
Author : J. Edwards
URL : NA
Description : The implementation of the -= operator for Complex.h that was written by J. Edwards
Created : Dec. 7th
Modified : Dec. 12th
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
*/
#include "../../include/Complex.h"

// The -= function for a Complex and a real number
void Complex::operator -= (float rhs){
  r -= rhs;
  return(*this);
}

// The -= function for two Complex numbers
void Complex::operator -= (Complex rhs){
  r -= rhs.r;
  i -= rhs.i;
  return(*this);
}