#include "gtest/gtest.h"
#include "vdd.h"
#include "util.h"

TEST(mixed, t1) {
    ASSERT_SUCCESS("int x", "'x' is a variable of type int");
}

TEST(mixed, t2) {
    ASSERT_SUCCESS("int (x)", "'x' is a variable of type int");
}

TEST(mixed, t3) {
    ASSERT_SUCCESS("int ((((x))))", "'x' is a variable of type int");
}