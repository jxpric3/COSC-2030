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
        cout << "Employee hourly payrate: $" << hourlyPayRate << endl; 
    }
    else if(shift == 2)
    {
        cout << "Employee shift designation: Day Shift." << endl; 
        cout << "Employee hourly payrate: $" << hourlyPayRate << endl; 
     }
    
}
