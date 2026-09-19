#include "ParkingMeter.h" 
#include <iostream> 

using namespace std; 

ParkingMeter::ParkingMeter()
{
    minutesPurchased = 0; 
}

ParkingMeter::ParkingMeter(int minutes)
{
    minutesPurchased = minutes; 
}

void ParkingMeter::setMinutesPurchased(int purchaseMinutes)
{
    minutesPurchased = purchaseMinutes; 
}

int ParkingMeter::getMinutesPurchased() const
{
    return minutesPurchased; 
}