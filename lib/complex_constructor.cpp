/*
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Title : Complex______.cpp
/*
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Title : Complex______.cpp
Author : _______
URL : NA
Description : The implementation for Complex.h that was written by 
Created : Nov. 28th
Modified : Dec. 11th
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
*/

#include <cmath>
#include "../include/Complex.h"

#define PI 3.1415926538979323846
#define EULER 2.71828182845904523536

Complex::Complex() 
{
  r = 0.;
  i = 0.;
}

Complex::Complex(double r, double i = 0.) {
  this->r = r;
  this->i = i;
}

// - - - - - Other Functions Follow - - - - - - - - - - - -


ostream& operator<<(ostream& in, Complex& toPrint) {
  in << toPrint.r << " + " << toPrint.i << "i";
  return in;
}