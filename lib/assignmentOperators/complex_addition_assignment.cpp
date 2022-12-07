#include "../../include/Complex.h"

// The += function for a Complex and a real number
Complex Complex::operator += (float rhs){
  r += rhs;
  return(*this);
}

// The += function for two Complex numbers
Complex Complex::operator += (Complex rhs){
  r += rhs.r;
  i += rhs.i;
  return(*this);
}