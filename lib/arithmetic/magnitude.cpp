#include "../../include/Complex.h"
#include "math.h"

// The += function for a Complex and a real number
 double abs (Complex c){
  return(sqrt(pow(c.r, 2) + pow(c.i, 2)));
}