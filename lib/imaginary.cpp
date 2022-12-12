/*
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Title : imaginary.cpp
Author : J. Edwards
URL : NA
Description : The implementation of the imaginary function for Complex.h that was written by J. Edwards
Created : Dec 12th
Modified : Dec. 12th
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
*/
#include "../include/Complex.h"

// The function to return the imaginary part of a complex number
double imag(Complex c){
  return(c.i);
}