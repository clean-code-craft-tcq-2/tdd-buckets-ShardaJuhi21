#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "test/catch.hpp"
#include "CurrentManagement.h"

TEST_CASE("detect the ranges and output the number of readings in each range") {
  bool expectedVal = TRUE;
  bool retVal ;
  int anArray[] ={5,3,4,10,11,12};
     int n = sizeof(anArray) / sizeof(anArray[0]);
     
  //GIVEN( "An Array is not sorted" ) {

        // Validate one use case for the GIVEN object
       // WHEN( " DetectRange() is called" ) {
            retVal = DetectRange(anArray, n);

            //THEN( "whether the function returns true or not" ) {
                REQUIRE( retVal == expectedVal );
//             }
//         }
//     }
  
  
 }
