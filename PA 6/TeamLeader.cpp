#include "TeamLeader.h"

#include <iostream>
#include <string>

TeamLeader::TeamLeader()
{
     monthlyBonus = 0.00; 
     requiredTrainingHours = 0; 
     attendedTrainingHours = 0;
}

TeamLeader::TeamLeader(string firstName, string lastName, int e_number, string date, int empShift, double empPayRate, double bonus, int requiredHours) : ProductionWorker(firstName, lastName, e_number, date, empShift, empPayRate)
{
        attendedTrainingHours = 0; 
        requiredTrainingHours = requiredHours; 
        monthlyBonus = bonus;
}

void TeamLeader::setMonthlyBonus(double bonus)
{
    monthlyBonus = bonus;
}

void TeamLeader::setRequiredTrainingHours(int reqHours)
{
    requiredTrainingHours = reqHours; 
}

void TeamLeader::setAttendedTrainingHours(int hours)
{
    attendedTrainingHours = hours; 
}

void TeamLeader::printInfo()
{
    ProductionWorker::printInfo(); 
    cout << "The monthly Team Leader Bonus for employee: $" << monthlyBonus << endl;
    cout << "The required Team Leader Training hours for employee: " << requiredTrainingHours << endl; 
    

}

double TeamLeader::getMonthlyBonus()
{
    return monthlyBonus;
}

int TeamLeader::getRequiredTrainingHours()
{
    return requiredTrainingHours;
}

int TeamLeader::getAttendedTrainingHours()
{
    return attendedTrainingHours;
}