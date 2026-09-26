#ifndef PRODUCTIONWORKER_H 
#define PRODUCTIONWORKER_H

#include "Employee.h"
#include <string> 

using namespace std;

class ProductionWorker : public Employee
{
   private: 
        int shift; 
        double hourlyPayRate;


   public:

    ProductionWorker();
    ProductionWorker(string firstName, string lastName, int e_number, string date, int empShift, double empPayRate); 

    void setShift(int empShift);
    void setPayRate(double empPayRate); 

    int getShift();
    double getEmployeePayRate(); 


    

};

#endif