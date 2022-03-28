#include <iostream>
#include "shapes.h"

int main()
{
    Rectangle ob1(4,4);
    std::cout << ob1.get_height() << "--" << ob1.get_width();
    ob1.show();
    Triangle ob2(5,5);
    ob2.show();
    return 0;
}
