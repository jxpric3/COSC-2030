#include "Rectangle.h"

Rectangle::Rectangle(int long len, int long w)
{
    length = len; 
    width = w; 
    calcArea(length, width); 
}


int long Rectangle::getWidth()
{
    return width; 
}

int long Rectangle::getLength()
{
    return length; 
}

void Rectangle::calcArea(int long, int long)
{
    area = length * width; 
}


