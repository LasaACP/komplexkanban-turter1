#include "../../include/Complex.h"
Complex Complex::operator /= (float div){
  r /= div;
  i /= div;
  return(*this);
}

Complex Complex::operator /= (Complex& div) {
  Complex num = *this * Complex::conj(div);
  return num / Complex::norm(div);
}