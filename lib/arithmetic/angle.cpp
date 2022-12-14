/*
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Title : angle.cpp
Author : J. Edwards
URL : NA
Description : The implementation of the angle function for Complex.h that was written by J. Edwards
Created : Dec 12th
Modified : Dec. 14th
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
*/
#include "../../include/Complex.h"
#include "math.h"

// The function to get the angle of a Complex number
double arg(Complex c){
  float ratio = c.i/c.r;
  float rads = atan(ratio);
  if(c.i > 0 && c.r < 0){
    rads += M_PI;
  }
  else if(c.i < 0 && c.r < 0){
    rads += M_PI;
  }
  else if(c.i < 0 && c.r > 0){
    rads += 2*M_PI;
  }
  return(rads);
}