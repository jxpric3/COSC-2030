#include "Rectangle.h"

Rectangle::Rectangle()
{
    width = 0;
    length 0;
}

Rectangle::Rectangle(int long len, int long w)
{
    length = len; 
    width = w; 
    calcArea(); 
}

 int long Rectangle::setLength(int long len)
 {
    if(len >= 0)
    {
        length = len;
    }
    else
    {
        throw NegativeLength(); 
    }
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


