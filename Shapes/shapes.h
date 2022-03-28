#ifndef SHAPES_H
#define SHAPES_H
#pragma once

class Shapes
{
public:
    Shapes() = default;
    Shapes(int, int);
    ~Shapes() = default;
    virtual void show() = 0;
    virtual int get_height() = 0;
    virtual int get_width() = 0;
};

class Rectangle : Shapes
{
public:
    Rectangle() = default;
    Rectangle(int wigth, int height);
    void show();
    int get_height();
    int get_width();
private:
    int height_{0};
    int width_{0};
};

class Triangle: Shapes
{
public:
    Triangle() = default;
    Triangle(int width_, int height_);
    void show();
    int get_height();
    int get_width();
private:
    int height_{0};
    int width_{0};
};

class Circle: Shapes
{
public:
    Circle() = default;
    Circle(int width_, int height_);
    void show();
    int get_height();
    int get_width();
private:
    int height_{0};
    int width_{0};
};

#endif // SHAPES_H
