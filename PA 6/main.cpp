#include "ProductionWorker.h"
#include "ShiftSupervisor.h"
#include "TeamLeader.h"

#include <iostream>
#include <string> 

using namespace std;

int main()
{
    int testShift = 0; 
    

    ProductionWorker myEmployee("Joshua", "Price", 990866754, "January 2, 1978", 1, 98.62); 

    myEmployee.printInfo();

    ShiftSupervisor myShiftSupervisor("Robert", "Price", 76897632, "February 28, 1998", 98000.00, 60000.00); 

    myShiftSupervisor.printInfo(); 

    TeamLeader myTeamLeader("Jacob", "Saucer", 99099768, "March 6, 1987", 1, 105.00, 13456.00, 100);

    myTeamLeader.printInfo();

    

    cout << endl; 
    cout << "**************************************************" << endl;
    cout << "Creating a default Production Worker For Get and Set Test " << endl; 
    
    ProductionWorker secondProductionWorker; 
    cout << "**************************************************" << endl;
    cout << "Current Values for Default constructed Production worker:  " << endl; 
    
    secondProductionWorker.printInfo();
    cout << endl; 
    cout << "**************************************************" << endl;


    cout << "Setting first and last name of the employee " << endl; 

    secondProductionWorker.setEmployeeFirstName("Donald");
    secondProductionWorker.setEmployeeLastName("Frisco"); 

    cout << "The name of the employee is now  " << secondProductionWorker.getEmployeeFirstName() << ", " << secondProductionWorker.getEmployeeLastName() << endl; 

    cout << "Setting the employee's ID numnber " << endl; 

    secondProductionWorker.setEmployeeNumber(987456156);

    cout << "The employee id  is now  " << secondProductionWorker.getEmployeeNumber() << endl; 

    cout << "Setting the employee's hire date " << endl; 
    
    secondProductionWorker.setemployeeHireDate("May 17th, 2024");

    cout << "The Employee hire date  is now  " << secondProductionWorker.getEmployeeHireDate() << endl; 

    cout << "Setting the employee's Shift " << endl; 

    secondProductionWorker.setShift(2); 

    testShift = secondProductionWorker.getShift(); 

    if(testShift == 1)
    {
        cout << "Employee shift designation: Day Shift." << endl; 
        
    }
    else if(testShift == 2)
    {
        cout << "Employee shift designation: Night Shift." << endl; 
     }
    else
    {
        cout << "Employee shift designation has not been classified for this employee." << endl;
    } 
    
    cout << "Setting the employee's hourly pay rate " << endl; 
    secondProductionWorker.setPayRate(34.56);
    cout << "Employee hourly payrate: $" << secondProductionWorker.getEmployeePayRate() << endl; 

    cout << endl; 
    cout << "**************************************************" << endl;
    cout << "Modifying the Supervisor Object" << endl; 

    cout << "The current annual salary for the Supervisor is: $" << myShiftSupervisor.getAnnualSalary() << endl; 

    myShiftSupervisor.setannualSalary(122000.00);
    cout << "The annual salary for the Supervisor is now: $" << myShiftSupervisor.getAnnualSalary() << endl; 

    cout << "The current annual bonus for the Supervisor is: $" << myShiftSupervisor.getAnnualBonus() << endl; 
    myShiftSupervisor.setAnnualBonus(90000.00); 
    cout << "The annual bonus for the Supervisor is now: $" << myShiftSupervisor.getAnnualBonus() << endl;
    
    cout << endl; 
    cout << "**************************************************" << endl;
    cout << "Modifying the Team Leader Object" << endl; 

    cout << "The current monthly bonus for the Team Leader is: $" << myTeamLeader.getMonthlyBonus() << endl; 
    myTeamLeader.setMonthlyBonus(8000.00); 
    cout << "The monthly bonus for the Team Leader is now: $" << myTeamLeader.getMonthlyBonus() << endl; 
    cout << "The current Required Training Hours for the Team Leader is: " << myTeamLeader.getRequiredTrainingHours() << endl; 
    myTeamLeader.setRequiredTrainingHours(89);
    cout << "The Required Training Hours for the Team Leader is now: " << myTeamLeader.getRequiredTrainingHours() << endl; 

    cout << "The current Attended Training Hours for the Team Leader is: " << myTeamLeader.getAttendedTrainingHours() << endl; 
    myTeamLeader.setAttendedTrainingHours(16);
    cout << "The Attended Training Hours for the Team Leader is now: " << myTeamLeader.getAttendedTrainingHours() << endl; 



    return 0; 
}