#include "Circle.h"
#include "Rectangle.h"

#include <iostream>

using namespace std;


int main()
{
    Circle myCircle(6, 8, 4); 
    Rectangle myRectangle(12,12);

    cout << "Here is the calculated area of my fancy circle: " << myCircle.getArea() << endl; 
    cout << "Here is the calculated area of my fancy rectangle: " << myRectangle.getArea() << endl; 

    
    return 0; 

}