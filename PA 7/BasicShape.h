#ifndef BASICSHAPE_H
#define BASICSHAPE_H

#include <string> 


using namespace std;

class BasicShape{

    private: 
        //double area; 
    
    protected: 
        double area; //changed the area variable to protected so that the derive classes could access it. 
    
    public: 
        double getArea(){return area;}
        virtual void calcArea() = 0; 

};

#endif
