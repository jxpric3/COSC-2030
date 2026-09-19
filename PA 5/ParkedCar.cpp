#include "ParkedCar.h"

using namespace std; 

ParkedCar::ParkedCar()
{
    minutesParked = 0;  
}

ParkedCar::ParkedCar(string make, string model, string color, string license, int minutes)
{
    carMake = make; 
    carModel = model; 
    carColor = color; 
    carLicenseNumber = license; 
    minutesParked = minutes; 
}



void ParkedCar::setCarMake(string make)
{
    carMake = make; 
}

void ParkedCar::setCarModel(string model)
{
    carModel = model; 
}

void ParkedCar::setCarColor(string color)
{
    carColor = color; 
}

void ParkedCar::setCarLicense(string license)
{
    carLicenseNumber = license; 
}

void ParkedCar::setMinutesParked(int minutes)
{
    minutesParked = minutes; 
}

string ParkedCar::getCarMake() const
{
    return carMake; 
}

string ParkedCar::getCarModel() const
{
    return carModel; 
}

string ParkedCar::getCarColor() const
{
    return carColor; 
}

string ParkedCar::getCarLicense() const
{
    return carLicenseNumber; 
}

int ParkedCar::getMinutesParked() const 
{
    return minutesParked; 
}