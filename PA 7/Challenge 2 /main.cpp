
#include "Rectangle.h"

#include <iostream>

using namespace std;


int main()
{
    int long length; 
    int long width; 
   

    Rectangle secondRectangle; 

    cout << "Please enter the value for your new Rectangle's length: "; 
    cin >> length;
    cout << "Please enter the value for your new Rectangle's width: "; 
    cin >> width; 

    try
    {
        secondRectangle.setLength(length);
        secondRectangle.setWidth(width);
    }
    
    catch(Rectangle::NegativeLength)
    {
        cout << "ERROR: A negative value was given for the rectangle's length." << endl; 

    }

    catch(Rectangle::NegativeWidth)
    {
        cout << "ERROR: A negative value was given for the rectangle's width." << endl; 

    }

    

    
    return 0; 

}