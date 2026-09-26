#include "ProductionWorker.h"

#include <iostream>
#include <string> 

using namespace std;

int main()
{
    
    ProductionWorker myEmployee("Joshua", "Price", 990866754, "January 2, 1978", 1, 98.62); 

    myEmployee.printInfo();

    return 0; 
}