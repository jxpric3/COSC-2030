#ifndef RECTANGLE_H 
#define RECTANGLE_H

#include "BasicShape.h"

class Rectangle : public BasicShape
{
    private: 
        int long width; 
        int long length; 

    public: 
        Rectangle(); 
        Rectangle(int long, int long);

        class NegativeWidth{};
        class NegativeLength{}; 

        void setWidth(int long);
        void setLength(int long); 

        int long getWidth();
        int long getLength();

        void calcArea(); 
        

}; 

#endif