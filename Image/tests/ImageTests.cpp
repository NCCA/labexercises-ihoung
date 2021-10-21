#include "Image.h"
#include <gtest/gtest.h>

TEST(RGBA, ctor)
{
    RGBA a;
    ASSERT_EQ(a.r, 0);
    ASSERT_EQ(a.g, 0);    
    ASSERT_EQ(a.b, 0);
    ASSERT_EQ(a.a, 255);
}

TEST(Image, userCtor)
{
    Image img(50,50);
}