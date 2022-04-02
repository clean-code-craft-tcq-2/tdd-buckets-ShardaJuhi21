#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "test/catch.hpp"
#include "CurrentManagement.h"

TEST_CASE("detect the ranges and output the number of readings in each range") {
  bool expectedVal = TRUE;
  bool retVal = DetectRange();
  REQUIRE(retVal == expected Val);
  
  
 }
