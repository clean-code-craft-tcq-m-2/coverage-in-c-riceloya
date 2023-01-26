#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "test/catch.hpp"
#include "typewise-alert.h"

TEST_CASE("infers the breach according to all 3 level limits") {
  REQUIRE(inferBreach(12, 10, 30) == TOO_LOW);
}
