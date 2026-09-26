#include "ProductionWorker.h"
#include "ShiftSupervisor.h"
#include "TeamLeader.h"

#include <iostream>
#include <string> 

using namespace std;

int main()
{
    
    ProductionWorker myEmployee("Joshua", "Price", 990866754, "January 2, 1978", 1, 98.62); 

    myEmployee.printInfo();

    ShiftSupervisor myShiftSupervisor("Robert", "Price", 76897632, "February 28, 1998", 98000.00, 60000.00); 

    myShiftSupervisor.printInfo(); 

    TeamLeader myTeamLeader("Jacob", "Saucer", 99099768, "March 6, 1987", 1, 105.00, 13456.00, 100);

    myTeamLeader.printInfo();


    return 0; 
}