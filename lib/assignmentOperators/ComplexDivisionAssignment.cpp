#include "../../include/Complex.h"

/*
    * assigns complex number result of division by float
    * @author Addy
    */
Complex Complex::operator /= (float div){
  r /= div;
  i /= div;
  return(*this);
}

/*
    * assigns complex number result of division by another complex
    * @author Addy
    */
Complex Complex::operator /= (Complex div) {
  Complex num = *this * Complex::conj(div);
  float n = Complex::norm(div);
  r = num.r / n;
  i = num.i / n;
  return (*this);
}