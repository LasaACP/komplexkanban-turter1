/*
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Title : angle.cpp
Author : J. Edwards
URL : NA
Description : The implementation of the angle function for Complex.h that was written by J. Edwards
Created : Dec 12th
Modified : Dec. 12th
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
*/
#include "../../include/Complex.h"
#include "math.h"

// The function to get the angle of a Complex number
double arg(Complex c){
  return(atan(c.i/c.r));
}