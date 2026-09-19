#ifndef POLICEOFFICER_H
#define POLICEOFFICER_H 

#include <string>
#include "ParkedCar.h"
#include "ParkingMeter.h"
using namespace std;

class ParkingTicket;

class PoliceOfficer
{
private:
    string officerName;
    int badgeNumber;

public:
    
    PoliceOfficer();
    PoliceOfficer(string name, int badge);

    void setName(string o_name);
    void setBadgeNumber(int b_num);

    string getName() const;
    int getBadgeNumber() const;

    bool isTimeExpired(const ParkedCar &, const ParkingMeter &) const; 


    ParkingTicket createTicket(const ParkedCar &) const;


};
#endif