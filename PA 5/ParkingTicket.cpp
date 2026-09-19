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
    int totalOverage = ticketCar.getMinutesParked() - meterMinutes; 

    if (totalOverage <= 60)
    {
        return firstHourRate; 
    }
    else
    {
        int measuredMinutes = totalOverage - 60; 

        if (measuredMinutes % 60 > 0)
        {
            return firstHourRate + (((measuredMinutes / 60) * additionalHourRate) + additionalHourRate );
        }
        else
        {
            return (((measuredMinutes / 60) * additionalHourRate) + firstHourRate);
        }
    }
    
}

string ParkingTicket::getCarMake() const
{
    return ticketCar.getCarMake();
}

string ParkingTicket::getCarModel() const
{
    return ticketCar.getCarModel();
}

string ParkingTicket::getCarColor() const
{
    return ticketCar.getCarColor();
}

string ParkingTicket::getCarLicense() const
{
    return ticketCar.getCarLicense();
}

string ParkingTicket::getOfficerName() const
{
    return ticketOfficer.getName();
}

int ParkingTicket::getOfficerBadgeNumber() const
{
    return ticketOfficer.getBadgeNumber();
}

