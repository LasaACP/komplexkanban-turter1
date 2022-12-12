#include "../../include/Complex.h"
#include "math.h"

// The magnitude function for a Complex number
double abs(Complex c){
  return(sqrt(pow(c.r, 2) + pow(c.i, 2)));
}