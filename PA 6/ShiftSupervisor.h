#ifndef SHIFTSUPERVISOR_H 
#define SHIFTSUPERVISOR_H

#include "Employee.h"
#include <string> 

using namespace std;

class ShiftSupervisor : public Employee
{
    private:

        double annualSalary;
        double annualBonus; 

    public:

        ShiftSupervisor(); 
        ShiftSupervisor(string firstName, string lastName, int e_number, string date, double supeSalary, double annual); 

    void setannualSalary(double salary);
    void setAnnualBonus(double bonus);

    void printInfo(); 

    double getAnnualSalary();
    double getAnnualBonus(); 



};

#endif