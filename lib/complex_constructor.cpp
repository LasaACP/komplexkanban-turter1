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

/*
    * Complex class default constructor
    * @author Addy
    */
Complex::Complex() 
{
  r = 0.;
  i = 0.;
}

/*
    * Complex class initializing constructor
    * @author Addy
    */
Complex::Complex(double r, double i = 0.) {
  this->r = r;
  this->i = i;
}

// - - - - - Other Functions Follow - - - - - - - - - - - -


/*
    * operator to insert a complex number into an ostream
    * @author Addy
    */
ostream& operator<<(ostream& in, Complex toPrint) {
  if (toPrint.i >= 0.) {
    in << toPrint.r << " + " << toPrint.i << "i";
  } else {
    in << toPrint.r << " - " << -toPrint.i << "i";
  }
  return in;
}


/*
    * operator to determine if a complex number is equal to another complex number
    * @author Addy
    */
bool Complex::operator == (Complex other) const {
  return this->r == other.r && this->i == other.i;
}

/*
    * operator to determine if a complex number is equal to a double
    * @author Addy
    */
bool Complex::operator == (double other) const {
  return this->r == other && this->i == 0.;
}

/*
    * returns the conjugate (a - bi) of com
    * @param com the complex number to find the conjugate of
    * @return the conjugate of com
    * @author Addy
    */
Complex Complex::conj(Complex in) {
  return Complex(in.r, -in.i);
}

/*
    * returns the norm (a^2 + b^2) of com
    * @param com the complex number to find the norm of
    * @return the norm of com
    * @author Addy
    */
double Complex::norm(Complex in) {
  return in.r * in.r + in.i * in.i;
}