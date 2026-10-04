#ifndef CIRCLE_H 
#define CIRCLE_H

#include "BasicShape.h"

class Circle : public BasicShape
{
    private: 
        int long centerX; 
        int long centerY; 
        double radius; 

    public: 

        Circle(int long, int long, double);
      

        int long getCenterX(); 
        int long getCenterY(); 

        void calcArea(); 


};

#endif