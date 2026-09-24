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
        std::chrono::year_month_day hireDate; 

    public:

        Employee(); 
        Employee(string firstName, string lastName, int e_number, std::chrono::year_month_day date);

        void setEmployeeFirstName(string firstName); 
        void setEmployeeLastName(string lastName); 
        void setEmployeeNumber(int empNumber); 
        void setemployeeHireDate(std::chrono::year_month_day date); 

        string getEmployeeFirstName(); 
        string getEmployeeLastName(); 
        int getEmployeeNumber(); 
        std::chrono::year_month_day getEmployeeHireDate(); 





};

#endif