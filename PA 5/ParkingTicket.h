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
    double fineAmount; 

    ParkedCar ticketCar; 
    PoliceOfficer ticketOfficer; 
    
    double calculateFine(int meterMinutes) const;


    public: 

    ParkingTicket(const ParkedCar &car, const PoliceOfficer &officer, int meterMinutes);
    

    string getCarMake() const;
    string getCarModel() const;
    string getCarColor() const;
    string getCarLicense() const;

    string getOfficerName() const;
    int getOfficerBadgeNumber() const;
    double getFineAmount() const; 
    
};
#endif