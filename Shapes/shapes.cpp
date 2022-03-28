#include "shapes.h"
#include <iostream>

Rectangle::Rectangle(int width, int height) : width_{width}, height_{height} { }

int Rectangle::get_height()
{
    return height_;
}

int Rectangle::get_width()
{
    return width_;
}

void Rectangle::show()
{
    std::cout<<"\n";
    for (std::ptrdiff_t i = 0; i< height_;i+=1)
    {
        for (std::ptrdiff_t j = 0; j< width_;j+=1)
        {
            std::cout<<"*"<<" ";
        }
        std::cout<<"\n";
    }
    std::cout<<std::endl;
}

Triangle::Triangle(int width, int height): width_{width}, height_{height} { }

int Triangle::get_width()
{
    return width_;
}

int Triangle::get_height()
{
    return height_;
}

void Triangle::show()
{
    std::cout<<"\n";
    for (std::ptrdiff_t i = 0; i< height_;i+=1)
    {
        for (std::ptrdiff_t j = 0; j<width_; j+=1)
        {
            if ((j<width_-i)|(j>i)) std::cout<<" "<< " "; else std::cout<<" "<< "*";
                }
        std::cout<<"\n";
    }
}


Circle::Circle(int width, int height): width_{width}, height_{height} { }

int Circle::get_width()
{
    return width_;
}

int Circle::get_height()
{
    return height_;
}

/*
void Circle::show()
{
    std::cout<<"\n";
    for (std::ptrdiff_t i = 0; i< height_;i+=1)
    {
        for (std::ptrdiff_t j = 0; j<width_; j+=1)
                {

                }
        std::cout<<"\n";
    }
}
*/

