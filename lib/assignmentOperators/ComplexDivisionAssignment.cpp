#include "../../include/Complex.h"
Complex Complex::operator /= (float div){
  r /= div;
  i /= div;
  return(*this);
}


//NOTE - commented out until * operator is finished
/*Complex Complex::operator /= (Complex div) {
  Complex num = *this * Complex::conj(div);
  float n = Complex::norm(div);
  r = num.r / n;
  i = num.i / n;
  return (*this);
}*/