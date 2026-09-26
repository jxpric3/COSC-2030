#include "ProductionWorker.h"
#include "ShiftSupervisor.h"

#include <iostream>
#include <string> 

using namespace std;

int main()
{
    
    ProductionWorker myEmployee("Joshua", "Price", 990866754, "January 2, 1978", 1, 98.62); 

    myEmployee.printInfo();

    ShiftSupervisor myShiftSupervisor("Robert", "Price", 76897632, "February 28, 1998", 98000.00, 60000.00); 

    myShiftSupervisor.printInfo(); 


    return 0; 
}