#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "test/catch.hpp"
#include "typewise-alert.h"

TEST_CASE("infers the breach according to all 3 level limits") {
  REQUIRE(inferBreach(12, 10, 30) == TOO_LOW);
  REQUIRE(inferBreach(22, 10, 30) == TOO_LOW);
  REQUIRE(inferBreach(47, 40, 45 ) == TOO_HIGH);
  REQUIRE(inferBreach(43, 40, 45 ) == TOO_HIGH);
  REQUIRE(inferBreach(37,35,40) == NORMAL);
  REQUIRE(inferBreach(30,43,44) == NORMAL);
}
