//
// Created by lhr on 2015-08-15.
//

#define CATCH_CONFIG_MAIN

#include "catch.hpp"
#include "../src/hello.h"

TEST_CASE("dummy", "[none]") {
    REQUIRE(1 == 1);
}

TEST_CASE("test hello", "[hello]") {
    hello();
}