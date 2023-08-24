#include <gtest/gtest.h>
#include "hello.h"


// Ref: https://google.github.io/googletest/reference/assertions.html

TEST(MyTests, StrChecks) {
   EXPECT_EQ(42,check());
}

