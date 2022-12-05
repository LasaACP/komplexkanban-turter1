#include "../../include/Complex.h"

// The += function for a Complex and a real number
Complex Complex::operator += (float rhs){
  r += rhs;
  return(*this);
}