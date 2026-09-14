
#ifndef DAYOFYEAR_H
#define DAYOFYEAR_H

#include <string>   

class DayOfYear{
    private: 
        int day; 
        static const std::string monthNames[12]; 

    public: 
        DayOfYear(int inputDay);

        void printInfo() const; 


};

#endif  