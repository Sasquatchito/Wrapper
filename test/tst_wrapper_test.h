#ifndef TST_WRAPPER_TEST_H
#define TST_WRAPPER_TEST_H

#include <gtest/gtest.h>
#include <gmock/gmock-matchers.h>

using namespace testing;

TEST(wrapper_test, wrapper_test)
{
    EXPECT_EQ(1, 1);
    ASSERT_THAT(0, Eq(0));
}

#endif // TST_WRAPPER_TEST_H
