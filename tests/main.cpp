/*
  only run this if you are in the tests folder, i.e. do cd tests in shell
  Compile with: g++ main.cpp ../src/fac.cpp catch_amalgamated.cpp
  Runn with ./a.out

*/


//#define CATCH_CONFIG_RUNNER
//#define CATCH_AMALGAMATED_CUSTOM_MAIN
#include <iostream>
#include "catch_amalgamated.hpp"
#include "../src/fac.h"
#include "../include/Complex.h"
using namespace std;

#ifdef CATCH_AMALGAMATED_CUSTOM_MAIN

int main( int argc, char* argv[] ) {
  // global setup...

  int result = Catch::Session().run( argc, argv );

  // global clean-up...
    cout << "Hello Catch2 Build with custom main()\n";

  return result;
}

#else    //Not CATCH_AMALGAMATED_CUSTOM_MAIN

TEST_CASE("Quick Catch2 test on Factorial", "[Factorial]")
{
  cout << "Hello Catch2 Build with Catch2 main()\n";
  cout << "Running tests on Factorial" << endl;
  REQUIRE(Factorial(1) == 1);
  REQUIRE(Factorial(2) == 2);
  REQUIRE(Factorial(3) == 6);
  REQUIRE(Factorial(4) == 24);
  REQUIRE(Factorial(5) == 1);
}


TEST_CASE("Addy's Catch2 tests", "[ComplexFactorial]")
{
  cout << "Hello Catch2 Build with Catch2 main()\n";
  cout << "Running tests on Addy's function" << endl;
  //Conjugate
  REQUIRE(conj(Complex(1., 1.)) == Complex(1., -1.));
  REQUIRE(conj(Complex(1., 0.)) == Complex(1., 0.));
  REQUIRE(conj(Complex(0., 5.)) == Complex(0., -5.));
  //Norm
  REQUIRE(norm(Complex(2., 5.)) == 29.);
  REQUIRE(norm(Complex(3., 0.)) == 9.);
  REQUIRE(norm(Complex(0., 5.)) == 25.);
  //LOG
  REQUIRE(log(Complex(1., 5.)) == Complex(1.629048269, 1.3734007669));
  REQUIRE(log(Complex(0., 8.)) == Complex(2.0794415417, 1.5707963268));
  REQUIRE(log(Complex(-1., 4.)) == Complex(1.416606672, 1.8157749899));
  REQUIRE(log(Complex(-5., -2.2)) == Complex(1.6979248877, -2.727085779));
  REQUIRE(log(Complex(1.2, -2.2)) == Complex(0.9186849902, -1.0714496051));
  
}
// */
#endif  //ifndef CATCH_AMALGAMATED_CUSTOM_MAIN
