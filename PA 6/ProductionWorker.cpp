#include "ProductionWorker.h"

#include <string> 
#include <iostream>

ProductionWorker::ProductionWorker()
{
    shift = 0;    
    hourlyPayRate = 0.00; 
}

ProductionWorker::ProductionWorker(string firstName, string lastName, int e_number, string date, int empShift, double empPayRate) : Employee(firstName, lastName, e_number, date)
{
    shift = empShift; 
    hourlyPayRate = empPayRate; 

}

void ProductionWorker::printInfo()
{
    Employee::printInfo(); 
    if(shift == 1)
    {
        cout << "Employee shift designation: Day Shift." << endl; 
        
    }
    else if(shift == 2)
    {
        cout << "Employee shift designation: Night Shift." << endl; 
     }
    else
    {
        cout << "Employee shift designation has not be classified for this employee." << endl;
    } 
    cout << "Employee hourly payrate: $" << hourlyPayRate << endl; 
}

void ProductionWorker::setShift(int empShift)
{
    shift = empShift; 
}
void ProductionWorker::setPayRate(double empPayRate)
{
    hourlyPayRate = empPayRate; 
}

int ProductionWorker::getShift()
{
    return shift;
}

double ProductionWorker::getEmployeePayRate()
{
    return hourlyPayRate;
}

