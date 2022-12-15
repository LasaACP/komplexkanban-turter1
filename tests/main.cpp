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
  cout << "Running tests on Addy's functions" << endl;
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

TEST_CASE("Tate's Catch2 tests", "[ComplexMultiplicationDivision]"){
  cout << "Hello Catch2 Build with Catch2 main()\n";
  cout << "Running tests on Tate's functions" << endl;
  //Multiplication
  REQUIRE((Complex(1., 1.) * Complex(1., 1.)) == Complex(0., 2.));
  REQUIRE((Complex(5., -3.) * Complex(1., 2.)) == Complex(11., 7.));
  REQUIRE((Complex(8., -1.) * Complex(4., -4.)) == Complex(28., -36.));
  //Division
  REQUIRE((Complex(1., 1.) / Complex(1., 1.)) == Complex(1., 0.));
  REQUIRE((Complex(5., -3.) / Complex(1., 2.)) == Complex((-1.0/5.0), (-13.0/5.0)));
  REQUIRE((Complex(8., -1.) / Complex(4., -4.)) == Complex((9.0/8.0), (7.0/8.0)));
}

TEST_CASE("Jackson's Catch2 tests"){
  cout << "Hello Catch2 Build with Catch2 main()\n";
  cout << "Running tests on Jackson's functions" << endl;
  Complex a(5.0,6.0),b(3.0, 4.0);
  
  a+=5;
  REQUIRE(a == Complex(10.0, 6.0));
  a+=Complex(1.0, 1.0);
  REQUIRE(a == Complex(11.0, 7.0));
  a-=Complex(1.0, 1.0);
  REQUIRE(a == Complex(10.0, 6.0));
  a-=5;
  REQUIRE(a == Complex(5.0, 6.0));

  REQUIRE(abs(a) == sqrt(61));

  REQUIRE(arg(b) == atan(4.0/3.0));
}

TEST_CASE("Addition Catch2 tests", "[ComplexAddition]"){
  cout << "Hello Catch2 Build with Catch2 main()\n";
  cout << "Running tests on addition" << endl;
  //Addition
  REQUIRE((Complex(1., 1.) + Complex(1., 1.)) == Complex(2., 2.));
  REQUIRE((Complex(5., -3.) + Complex(1., 2.)) == Complex(6., -1.));
  REQUIRE((Complex(8., -1.) + Complex(4., -4.)) == Complex(12., -5.));

}

TEST_CASE("Subtraction Catch2 tests", "[ComplexSubtraction]"){
  cout << "Hello Catch2 Build with Catch2 main()\n";
  cout << "Running tests on subtraction" << endl;
  //Subtraction
  REQUIRE((Complex(1., 1.) - Complex(1., 1.)) == Complex(0., 0.));
  REQUIRE((Complex(5., -3.) - Complex(1., 2.)) == Complex(4., -5.));
  REQUIRE((Complex(8., -1.) - Complex(4., -4.)) == Complex(4., 3.));

}

TEST_CASE("Multiplication and Division Assignment Catch2 tests", "[ComplexMultiplicationDivisionAssignment]"){
  Complex tempComp;
  //Multiplication
  tempComp = Complex(1., 1.);
  tempComp *= Complex(1., 1.);
  REQUIRE(tempComp == Complex(0., 2.));

  tempComp = Complex(5., -3.);
  tempComp *= Complex(1., 2.);
  REQUIRE(tempComp == Complex(11., 7.));
  
  tempComp = Complex(8., -1.);
  tempComp *= Complex(4., -4.);
  REQUIRE(tempComp == Complex(28., -36.));
  
  //Division
  tempComp = Complex(1., 1.);
  tempComp /= Complex(1., 1.);
  REQUIRE(tempComp == Complex(1., 0.));

  tempComp = Complex(5., -3.);
  tempComp /= Complex(1., 2.);
  REQUIRE(tempComp == Complex((-1.0/5.0), (-13.0/5.0)));
  
  tempComp = Complex(8., -1.);
  tempComp /= Complex(4., -4.);
  REQUIRE(tempComp == Complex((9.0/8.0), (7.0/8.0)));

}
// */
#endif  //ifndef CATCH_AMALGAMATED_CUSTOM_MAIN
