#include "BasicShape.h"
#include "Circle.h"

Circle::Circle(int long x, int long y, double r)
{
    centerX = x; 
    centerY = y; 
    radius = r; 

    calcArea(radius); 
}

int long Circle::getCenterX()
{
    return centerX; 
}

int long Circle::getCenterY()
{
    return centerY; 
}

void Circle::calcArea(double r)
{
    area = r * r; 

}

