#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "test/catch.hpp"
#include "typewise-alert.h"

TEST_CASE("infers the breach according to Lower limits") {
  REQUIRE(inferBreach(41, 43, 45) == TOO_HIGH);
}
