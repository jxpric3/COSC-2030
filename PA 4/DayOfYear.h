//DayOfYear.h 
#ifndef DayOfYear.h 
#define DayOfYear.h

using namespace std;

class DayOfYear
{
    private: 
        int dayNumber; 
        static const string monthNames[12]; 

    public: 
        DayOfYear (int dayOfYear);

        void printInfo() const; 


};

#endif  