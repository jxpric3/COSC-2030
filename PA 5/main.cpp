#include <iostream>
#include <string> 

#include "ParkedCar.h"
#include "ParkingMeter.h"
#include "PoliceOfficer.h"
#include "ParkingTicket.h"

using namespace std;

int main()
{
    ParkedCar carOne("Toyota", "Camry", "blue", "099YDS", 123); 
    PoliceOfficer officerOne("Officer Baker", 998885456); 
    ParkingMeter parkingMeterOne;

    if(officerOne.isTimeExpired(carOne, parkingMeterOne))
    {
        ParkingTicket ticketOne = officerOne.createTicket(carOne, parkingMeterOne.getMinutesPurchased());
        cout << "Full Ticket Report: " << endl; 
        cout << "Officer Name: " << ticketOne.getOfficerName() << endl;
        cout << "Officer Name: " << ticketOne.getOfficerBadgeNumber() << endl;
        cout << "Parking Fine Amount: " << ticketOne.getFineAmount() << endl; 
        cout << "Ticketed Car Information: "

    }

  
    return 0; 

}