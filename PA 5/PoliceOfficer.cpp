#include "PoliceOfficer.h"
#include "ParkingTicket.h"

using namespace std; 

PoliceOfficer::PoliceOfficer()
{
    badgeNumber = 0; 
}

PoliceOfficer::PoliceOfficer(string name, int badge)
{
    officerName = name; 
    badgeNumber = badge; 
}

void PoliceOfficer::setName(string o_name)
{
    officerName = o_name; 
}

void PoliceOfficer::setBadgeNumber(int b_num)
{
    badgeNumber = b_num; 
}


string PoliceOfficer::getName() const 
{
    return officerName; 
}

int PoliceOfficer::getBadgeNumber() const 
{
    return badgeNumber; 
}

bool PoliceOfficer::isTimeExpired(const ParkedCar &car, const ParkingMeter &meter) const
{
    return car.getMinutesParked() > meter.getMinutesPurchased(); 
}

ParkingTicket PoliceOfficer::createTicket(const ParkedCar &car, int meterMinutes) const
{
    return ParkingTicket(car, *this, meterMinutes);

}