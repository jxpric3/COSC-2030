#include "Employee.h"

#include <string>
#include <chrono>

using namespace std; 

Employee::Employee()
{
    
}

Employee::Employee(string firstName, string lastName, int e_number, string date)
{
    employeeFirstName = firstName; 
    employeeLastName = lastName; 
    employeeNumber = e_number; 
    hireDate = date; 
}

void Employee::setEmployeeFirstName(string firstName)
{
    employeeFirstName = firstName; 
}

void Employee::setEmployeeLastName(string lastName)
{
    employeeLastName = lastName; 
}
void Employee::setEmployeeNumber(int empNumber)
{
    employeeNumber = empNumber; 
}
void Employee::setemployeeHireDate(string date) 
{
    hireDate = date; 

}

string Employee::getEmployeeFirstName()
{
    return employeeFirstName;
}

string Employee::getEmployeeLastName()
{
    return employeeLastName;
}

int Employee::getEmployeeNumber()
{
    return employeeNumber;
}

string Employee::getEmployeeHireDate()
{
    return hireDate;
}
