/*

  Compile with: g++ main.cpp ../src/fac.cpp catch_amalgamated
  Runn with ./a.out

*/


//#define CATCH_CONFIG_RUNNER
//#define CATCH_AMALGAMATED_CUSTOM_MAIN
#include <iostream>
#include "catch_amalgamated.hpp"
#include "../src/fac.h"
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

/*TEST_CASE("Quick Catch2 test on Addition", "[Addition]")
{

  cout << "Hello Catch2 Build with Catch2 main()\n";
  cout << "Running tests on Addition" << endl;
  REQUIRE(Addition(1, 1) == 2);
  REQUIRE(Addition(2, 2) == 4);
  REQUIRE(Addition(3, 3) == 6);
  REQUIRE(Addition(4, 4) == 8);
  REQUIRE(Addition(5, 0) == 5);
}
// */
#endif  //ifndef CATCH_AMALGAMATED_CUSTOM_MAIN
