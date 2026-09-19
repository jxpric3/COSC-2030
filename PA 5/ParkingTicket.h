#ifndef PARKINGTICKET_H
#define PARKINGTICKET_H

#include <string>

#include "ParkedCar.h"
#include "PoliceOfficer.h"




class ParkingTicket
{
    private:
    static const double firstHourRate; 
    static const double additionalHourRate; 

    ParkedCar ticketCar; 
    PoliceOfficer ticketOfficer; 


    public: 

    ParkingTicket(const ParkedCar &car, const PoliceOfficer &officer);
    double calculateFine(int meterMinutes) const;

    string getCarMake() const;
    string getCarModel() const;
    string getCarColor() const;
    string getCarLicense() const;

    string getOfficerName() const;
    int getOfficerBadgeNumber() const;
    
};
#endif