#include "Rectangle.h"

Rectangle::Rectangle(int long len, int long w)
{
    length = len; 
    width = w; 
    calcArea(); 
}


int long Rectangle::getWidth()
{
    return width; 
}

int long Rectangle::getLength()
{
    return length; 
}

void Rectangle::calcArea()
{
    area = length * width; 
}


