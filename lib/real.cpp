/*
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Title : real.cpp
Author : J. Edwards
URL : NA
Description : The implementation of the real function for Complex.h that was written by J. Edwards
Created : Dec 12th
Modified : Dec. 12th
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
*/
#include "../include/Complex.h"

// The function to return the real part of a complex number
double real(Complex c){
  return(c.r);
}