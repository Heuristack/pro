#include "catch.hpp"

unsigned int Factorial(unsigned int number)
{
    return number <= 1 ? number : Factorial(number-1) * number;
}

TEST_CASE("Factorials are computed", "[factorial]")
{
    REQUIRE(Factorial(1) == 1);
    REQUIRE(Factorial(2) == 2);
    REQUIRE(Factorial(3) == 6);
    REQUIRE(Factorial(10) == 3628800);
}

// clang++ main.cpp -std=c++1z -DCATCH_CONFIG_MAIN -I../include

