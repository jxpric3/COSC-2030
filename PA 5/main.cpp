#include <iostream>
#include <string> 
#include <iomanip>

#include "ParkedCar.h"
#include "ParkingMeter.h"
#include "PoliceOfficer.h"
#include "ParkingTicket.h"

using namespace std;

void testHelpFunction(const PoliceOfficer &officer, int minutesParked, int minutesPurchased, const string &label); //Tester function so I didn't have to copy/paste a crap ton of code 

int main()
{
    PoliceOfficer officerOne("Officer Baker", 998885456); //Officer class object is declared in main because we assume it's one cop writing tickets. 

    testHelpFunction(officerOne, 60, 120, "One");
    testHelpFunction(officerOne, 60, 60, "Two");
    testHelpFunction(officerOne, 90, 60, "Three");
    testHelpFunction(officerOne, 120, 60, "Four");
    testHelpFunction(officerOne, 180, 60, "Five");
    testHelpFunction(officerOne, 187, 60, "Six");



    
}

void testHelpFunction(const PoliceOfficer &officer, int minutesParked, int minutesPurchased, const string &label) //this function allows us to test our edge cases without having to repeat A LOT of code
{
    ParkedCar carOne("Toyota", "Camry", "blue", "099YDS", minutesParked);
    ParkingMeter parkingMeterOne(minutesPurchased);

    cout << "TEST " << label << ": " << "Purchased: " << minutesPurchased << " Minutes Parked: " << minutesParked << endl;
    cout << "----------------------------------------" << endl;

    if(officer.isTimeExpired(carOne, parkingMeterOne))
    {
        ParkingTicket ticketOne = officer.createTicket(carOne, parkingMeterOne.getMinutesPurchased());
        cout << "Full Ticket Report: " << endl; 
        cout << "Officer Name: " << ticketOne.getOfficerName() << endl;
        cout << "Officer Badge Number: " << ticketOne.getOfficerBadgeNumber() << endl;
        cout << "Parking Fine Amount: " << "$" << ticketOne.getFineAmount() << endl; 
        cout << "Ticketed Car Information: " << endl; 
        cout << "Car License Number: " << ticketOne.getCarLicense() << endl; 
        cout << "Car Make: " << ticketOne.getCarMake() << endl; 
        cout << "Car Model: " << ticketOne.getCarModel() << endl; 
        cout << "Car Color: " << ticketOne.getCarColor() << endl; 
        cout << "----------------------------------------" << endl;
        

    }
    else{
        cout << "The vehicle is still within its purchased time limit. Do not issue a ticket." << endl;
        cout << "----------------------------------------" << endl;
        
    }
    

}