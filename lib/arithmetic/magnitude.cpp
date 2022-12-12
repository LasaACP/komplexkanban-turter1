/*
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Title : magnitude.cpp
Author : J. Edwards
URL : NA
Description : The implementation of the magnitude or absolute value function for Complex.h that was written by J. Edwards
Created : Dec 7th
Modified : Dec. 7th
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
*/
#include "../../include/Complex.h"
#include "math.h"

// The magnitude function for a Complex number
double abs(Complex c){
  return(sqrt(pow(c.r, 2) + pow(c.i, 2)));
}