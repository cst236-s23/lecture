#include <catch2/catch_test_macros.hpp>

#include "fact.h"

TEST_CASE("Factorials are computed", "[factorial][mytag]") {
    REQUIRE(fact(1) == 1);
    REQUIRE(fact(2) == 2);
    REQUIRE(fact(3) == 6);
    REQUIRE(fact(10) == 3628800);
}
