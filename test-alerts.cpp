#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "test/catch.hpp"
#include "typewise-alert.h"

TEST_CASE("infers the breach according to all level limits") {
  REQUIRE(inferBreach(12, 20, 30) == TOO_LOW);
  REQUIRE(inferBreach(48, 41, 45) == TOO_HIGH);
  REQUIRE(inferBreach(37, 36, 40) == NORMAL);
  REQUIRE(classifyTemperatureBreach(PASSIVE_COOLING,12) == NORMAL);
}
