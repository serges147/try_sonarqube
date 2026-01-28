//
// Created by sergei.shirokov on 1/28/26.
//

#include "math.hpp"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

namespace
{
    using namespace common;

    class TestMath : public testing::Test
    {
    };

    // Tests:

    TEST_F(TestMath, add)
    {
        EXPECT_THAT(math::add(1,2), 3);
    }
} // namespace
