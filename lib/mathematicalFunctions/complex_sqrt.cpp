/*
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Title : ComplexMultiplication.cpp
Author : Tate Smith
URL : NA
Description : The implementation for Complex.h that was written by Tate Smith. Returns the squareroot of a complex number
Created : Dec. 12nd
Modified : Dec. 12nd
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
*/

#include <cmath>
#include "../../include/Complex.h"
using namespace std;

Complex sqrt(Complex num)
{
  if(num.i != 0){
    double temp_real = sqrt((abs(num) + num.r)/2);
    double temp_imaginary = ((num.i/abs(num.i)) * sqrt((abs(num) - num.r)/2));
    Complex result_complex = Complex(temp_real, temp_imaginary);
    return result_complex;
  }
  else{
    Complex result_complex = Complex(sqrt(num.r), 0);
    return result_complex;
  }
}