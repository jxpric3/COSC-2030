#ifndef BASICSHAPE_H
#define BASICSHAPE_H

#include <string> 


using namespace std;

class BasicShape{

    private: 
        double area; 
    
    public: 
        double getArea(){return area;}
        virtual void calcArea() const = 0; 

};

#endif
