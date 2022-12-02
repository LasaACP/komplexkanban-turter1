#include "../../include/Complex.h"

using namespace std;

Complex Complex::operator += (float rhs){
  r += rhs;
  return(*this);
}