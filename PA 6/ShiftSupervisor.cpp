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

void ShiftSupervisor::setannualSalary(int salary)
{
    annualSalary = salary; 
}


void ShiftSupervisor::setAnnualBonus(double bonus)
{
    annualBonus = bonus; 
}

void ShiftSupervisor::printInfo()
{
    Employee::printInfo(); 
    cout << "Supervisor Annual Salary: $" << annualSalary << endl; 
    cout << "Supervisor Annual Production Bonus: $" <<  annualBonus << endl; 
}

    double getAnnualSalary();
    double getAnnualBonus(); 
