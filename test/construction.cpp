#include "catch.hpp"

#include "experimental/string_literal"
using namespace experimental;

TEST_CASE("Construct a constexpr empty string")
{
    constexpr auto s = make_basic_string_literal("");
    static_assert(s.size() == 0, "The size() of an empty string must be 0");
    REQUIRE(s.size() == 0);
}

TEST_CASE("Construct a constexpr empty string, via macro")
{
    constexpr auto s = S("");
    static_assert(s.size() == 0, "The size() of an empty string must be 0");
    REQUIRE(s.size() == 0);
}

