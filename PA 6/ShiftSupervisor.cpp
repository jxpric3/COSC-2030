#include "ShiftSupervisor.h"

#include <iostream>

ShiftSupervisor::ShiftSupervisor()
{
    annualSalary = 0.00;
    annualBonus = 0.00;
}

ShiftSupervisor::ShiftSupervisor(string firstName, string lastName, int e_number, string date, double supeSalary, double annua) : Employee(firstName, lastName, e_number, date)
{
    annualSalary = supeSalary; 
    annualBonus = annua; 

}

void ShiftSupervisor::setannualSalary(double salary)
{
    annualSalary = salary; 
}


void ShiftSupervisor::setAnnualBonus(double bonus)
{
    annualBonus = bonus; 
}

void ShiftSupervisor::printInfo()
{
    cout << "**************************************************" << endl;
    cout << endl; 
    cout << "Employee Classification: Shift Supervisor" << endl; 
    Employee::printInfo(); 
    cout << "Supervisor Annual Salary: $" << annualSalary << endl; 
    cout << "Supervisor Annual Production Bonus: $" <<  annualBonus << endl; 
}

double ShiftSupervisor::getAnnualSalary()
{
    return annualSalary;
}

double ShiftSupervisor::getAnnualBonus()
{
    return annualBonus; 
}
