#include "ProductionWorker.h"
#include "ShiftSupervisor.h"
#include "TeamLeader.h"

#include <iostream>
#include <string> 

using namespace std;

int main()
{
    /*
    ProductionWorker myEmployee("Joshua", "Price", 990866754, "January 2, 1978", 1, 98.62); 

    myEmployee.printInfo();

    ShiftSupervisor myShiftSupervisor("Robert", "Price", 76897632, "February 28, 1998", 98000.00, 60000.00); 

    myShiftSupervisor.printInfo(); 

    TeamLeader myTeamLeader("Jacob", "Saucer", 99099768, "March 6, 1987", 1, 105.00, 13456.00, 100);

    myTeamLeader.printInfo();

    */

    cout << "Creating a default Production Worker" << endl; 
    
    ProductionWorker secondProductionWorker; 

    cout << "Current Values for Default constructed Production worker:  " << endl; 
    
    secondProductionWorker.printInfo();

    cout << "Setting first and last name of the employee " << endl; 

    secondProductionWorker.setEmployeeFirstName("Donald");
    secondProductionWorker.setEmployeeLastName("Frisco"); 

    cout << "The name of the employee is now  " << secondProductionWorker.getEmployeeFirstName() << ", " << secondProductionWorker.getEmployeeLastName() << endl; 

    cout << "Setting the employee's ID numnber " << endl; 

    secondProductionWorker.setEmployeeNumber(987456156);

    cout << "The name of the employee id  is now  " << secondProductionWorker.getEmployeeNumber() << endl; 

    cout << "Setting the employee's ID numnber " << endl; 


    return 0; 
}