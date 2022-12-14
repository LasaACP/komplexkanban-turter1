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

//adds M_PI and M_E from CMATH
#define _USE_MATH_DEFINES
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

/*
  *Creates a complex number from a magnitude and angle
  *@author Addy
*/
Complex polar(double mag, double ang = 0.) {
  Complex newComplex = Complex();
  newComplex.r = cos(ang) * mag;
  newComplex.i = sin(ang) * mag;
  return newComplex;
  
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
Complex conj(Complex in) {
  return Complex(in.r, -in.i);
}

/*
    * returns the norm (a^2 + b^2) of com
    * @param com the complex number to find the norm of
    * @return the norm of com
    * @author Addy
    */
double norm(Complex in) {
  return in.r * in.r + in.i * in.i;
}

/*
    * returns the natural logarithm of a complex number
    * @param com the complex number to find the natural logarithm of
    * @return the natural logarithm of com
    * @author Addy
    */
Complex log(Complex in) {
  double r = log(abs(in));

  double i = atan(in.i / in.r);

  //upper left quadrant
  if (in.r < 0.) {
    i += M_PI;
  }

  return Complex(r, i);
}