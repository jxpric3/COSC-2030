#include "Employee.h"

#include <string>
#include <iostream>

using namespace std; 

Employee::Employee()
{
    employeeNumber = 0; 
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

void Employee::printInfo()
{
    cout << "Employee Information Summary" << endl; 
    cout << "Name: " << employeeFirstName << ", " << employeeLastName << endl; 
    cout << "Employee Number: " << employeeNumber << endl; 
    cout << "Employee Hire Date: " << hireDate << endl; 
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
