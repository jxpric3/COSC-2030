#ifndef TEAMLEADER_H 
#define TEAMLEADER_H

#include "ProductionWorker.h"
#include <string>

using namespace std;

class TeamLeader : public ProductionWorker
{
    private: 
        double monthlyBonus; 
        int requiredTrainingHours; 
        int attendedTrainingHours; 
    
    public: 

    TeamLeader(); 

    TeamLeader(string firstName, string lastName, int e_number, string date, int empShift, double empPayRate, double bonus, int requiredHours);
    void setMonthlyBonus(double bonus);
    void setRequiredTrainingHours(int reqHours);
    void setAttendedTrainingHours(int hours); 

    void printInfo(); 

    double getMonthlyBonus();
    int getRequiredTrainingHours();
    int getAttendedTrainingHours(); 

     
};

#endif