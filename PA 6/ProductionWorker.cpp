#include "ProductionWorker.h"

#include <string> 

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
