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
    // std::memset(m_pixels.get(), p.pixels, m_width*m_height*sizeof(RGBA));

TEST(Image, ctor)
{
    Image img;
    ASSERT_EQ(img.width(), 0);
    ASSERT_EQ(img.height(), 0);
}

TEST(Image, userCtor)
{
    Image img(250, 250);
    ASSERT_EQ(img.width(), 250);
    ASSERT_EQ(img.height(), 250);

    for(size_t y=0;y<img.width(); ++y)
    {
        for(size_t x=0;x<img.height();++x)
        {
            auto pixel = img.getPixel(x,y);
            ASSERT_EQ(pixel.r,0);
            ASSERT_EQ(pixel.g,0);
            ASSERT_EQ(pixel.b,0);
            ASSERT_EQ(pixel.a,255);

        }
    }

}

TEST(Image, userCtorColor)
{
    Image img(250, 150, 0,0,0,255);
    ASSERT_EQ(img.width(), 250);
    ASSERT_EQ(img.height(), 150);

    for(size_t y=0;y<img.height(); ++y)
    {
        for(size_t x=0;x<img.width();++x)
        {
            auto pixel = img.getPixel(x,y);
            ASSERT_EQ(pixel.r,0);
            ASSERT_EQ(pixel.g,0);
            ASSERT_EQ(pixel.b,0);
            ASSERT_EQ(pixel.a,255);

        }
    }
}

TEST(Image, writeToFile)
{
    Image img(500, 500, 255, 127, 64, 255);
    ASSERT_TRUE(img.write("test.bmp"));   
}

TEST(Image, setPixel)
{
    Image img(100, 100, 255, 255, 255, 255);
    for(size_t i=0; i<img.width(); ++i)
    {
        img.setPixel(i, 30, {255,0,0,255});
        img.setPixel(i, 31, {255,0,0,255});
        img.setPixel(i, 32, {255,0,0,255});
        img.setPixel(i, 33, {255,0,0,255});
        img.write("brand.bmp");
    }
}
