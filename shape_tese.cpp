#include"shapes.h"
#include"polygon.h"
#include"circle.h"
#include"rectangle.h"
#include"triangle.h"
#include<gtest/gtest.h>
namespace{
TEST(Circle,Area)
{
    Circle C1(40);
    EXPECT_EQ(5024,C1.area());
    EXPECT_EQ(251,C1.circum());
}
TEST(Triangle,Area)
{
    Triangle T1(6,4,7);
    EXPECT_EQ(12,T1.area());
    EXPECT_EQ(17,T1.circum());
}
TEST(Rectangle,Area)
{
    Rectangle R1(7,4);
    EXPECT_EQ(28,R1.area());
    EXPECT_EQ(22,R1.circum());
}
}