#include CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "functions_to_implement"
#include <vector>

TEST_CASE ("factorials are computed", "(factorial)") {
    REQUIRE( Factorial(0) == 0);
}