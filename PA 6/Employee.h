#ifndef EMPLOYEE_H 
#define EMPLOYEE_H

#include <string> 
#include <chrono>


using namespace std;

class Employee
{
    private: 
        string employeeFirstName;
        string employeeLastName; 
        int employeeNumber; 
        string hireDate; 

    public:

        Employee(); 
        Employee(string firstName, string lastName, int e_number, string date);

        void setEmployeeFirstName(string firstName); 
        void setEmployeeLastName(string lastName); 
        void setEmployeeNumber(int empNumber); 
        void setemployeeHireDate(string date); 

        string getEmployeeFirstName(); 
        string getEmployeeLastName(); 
        int getEmployeeNumber(); 
        string getEmployeeHireDate(); 





};

#endif