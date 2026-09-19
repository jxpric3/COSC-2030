#include <string> 
#include "ParkingTicket.h"


using namespace std; 

const double ParkingTicket::firstHourRate = 25.00; 
const double ParkingTicket::additionalHourRate = 10.00;



ParkingTicket::ParkingTicket(const ParkedCar &car, const PoliceOfficer &officer)
{
    ticketCar = car; 
    ticketOfficer = officer; 
}

double ParkingTicket::calculateFine(int meterMinutes) const
{
    if (meterMinutes <= 60)
    {
        return firstHourRate; 
    }
    else
    {
        int measuredMinutes = meterMinutes - 60; 

        if (measuredMinutes / 60 == 0)
        {
            return firstHourRate + ((measuredMinutes / 60) * additionalHourRate);
        }
        else
        {
            return firstHourRate + (((measuredMinutes / 60) * additionalHourRate) + additionalHourRate);
        }
    }
    
}

