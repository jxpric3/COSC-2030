#ifndef TEAMLEADER_H 
#define TEAMLEADER_H

#include "ProductionWorker.h"


using namespace std;

class TeamLeader : public ProductionWorker
{
    private: 
        double monthlyBonus; 
        int requiredTrainingHours; 
        int attendedTrainingHours; 
    
    public: 

    TeamLeader(); 

    TeamLeader(string firstName, string lastName, int e_number, string date, int empShift, double empPayRate, double bonus, int requiredHours) : ProductionWorker(firstName, lastName, e_number, date, empShift, empPayRate)
    {
        attendedTrainingHours = 0; 
        requiredTrainingHours = requiredHours; 
    }

    void setMonthlyBonus(double bonus);
    void setRequiredTrainingHours(int reqHours);
    void setAttendedTrainingHours(int empPayRate); 

    void printInfo(); 

    double getMonthlyBonus();
    int getRequiredTrainingHours();
    int attendedTrainingHours(); 

     
};

#endif