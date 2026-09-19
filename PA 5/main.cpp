#include <iostream>
#include <string> 

#include "ParkedCar.h"
#include "ParkingMeter.h"
#include "PoliceOfficer.h"
#include "ParkingTicket.h"

using namespace std;

void testHelpFunction(const PoliceOfficer &officer, int minutesParked, int minutesPurchased, const string &label);

int main()
{
    cout << "TEST 1: Purchased 120, Parked 60" << endl;
    cout << "----------------------------------------" << endl;
    
    ParkedCar carOne("Toyota", "Camry", "blue", "099YDS", 123); 
    PoliceOfficer officerOne("Officer Baker", 998885456); 
    ParkingMeter parkingMeterOne(45);

    if(officerOne.isTimeExpired(carOne, parkingMeterOne))
    {
        ParkingTicket ticketOne = officerOne.createTicket(carOne, parkingMeterOne.getMinutesPurchased());
        cout << "Full Ticket Report: " << endl; 
        cout << "Officer Name: " << ticketOne.getOfficerName() << endl;
        cout << "Officer Badge Number: " << ticketOne.getOfficerBadgeNumber() << endl;
        cout << "Parking Fine Amount: " << "$" << ticketOne.getFineAmount() << endl; 
        cout << "Ticketed Car Information: " << endl; 
        cout << "Car License Number: " << ticketOne.getCarLicense() << endl; 
        cout << "Car Make: " << ticketOne.getCarMake() << endl; 
        cout << "Car Model: " << ticketOne.getCarModel() << endl; 
        cout << "Car Color: " << ticketOne.getCarColor() << endl; 
        cout << endl;
        

    }
    else{
        cout << "The vehicle is still within its purchased time limit. Do not issue a ticket.";
        cout << endl;
    }

    
}

void testHelpFunction(const PoliceOfficer &officer, int minutesParked, int minutesPurchased, const string &label)
{
    
}