#include "catch.hpp"

#include "experimental/string_literal"
using namespace experimental;

TEST_CASE("length() and size() should return the same for zero-length strings")
{
    constexpr auto s = S("");
    static_assert(s.length() == s.size(), "The length() and size() methods should return the same values");
    REQUIRE(s.length() == s.size());
}

TEST_CASE("length() and size() should return the same for small strings")
{
    constexpr auto s = S("Call me Ishmael");
    static_assert(s.length() == s.size(), "The length() and size() methods should return the same values");
    REQUIRE(s.length() == s.size());
}

TEST_CASE("length() and size() should return the same for large strings")
{
    constexpr auto s = S("This string needs to be much much longer than this.  Much much longer.");
    static_assert(s.length() == s.size(), "The length() and size() methods should return the same values");
    REQUIRE(s.length() == s.size());
}

