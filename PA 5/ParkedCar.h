#ifndef PARKEDCAR_H
#define PARKEDCAR_H

#include <string>
using namespace std;
class ParkedCar
{
private:
    string carMake;
    string carModel;
    string carColor;
    string carLicenseNumber;
    int minutesParked;

public:
    ParkedCar();
    ParkedCar(string make, string model, string color, string license, int minutes);

    void setCarMake(string make);
    void setCarModel(string model);
    void setCarColor(string color);
    void setCarLicense(string license);
    void setMinutesParked(int minutes);

    string getCarMake() const;
    string getCarModel() const;
    string getCarColor() const;
    string getCarLicense() const;
    int getMinutesParked() const;
};
#endif