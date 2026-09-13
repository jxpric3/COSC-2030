#include "DayOfYear.h"
#include <iostream>

using namespace std;



const std::string DayOfYear::monthNames[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September","October",  "November", "December"};

DayOfYear::DayOfYear(int inputDay)
{
    day = inputDay; 
}

void DayOfYear::printInfo() const
{
    if (day <= 31) {
        cout << monthNames[0] << " " << day << endl;          
    } else if (day <= 59) {
        cout << monthNames[1] << " " << (day - 31) << endl;   
    } else if (day <= 90) {
        cout << monthNames[2] << " " << (day - 59) << endl;   
    } else if (day <= 120) {
        cout << monthNames[3] << " " << (day - 90) << endl;
    } else if (day <= 151) {
        cout << monthNames[4] << " " << (day - 120) << endl;
    } else if (day <= 181) {
        cout << monthNames[5] << " " << (day - 151) << endl;
    } else if (day <= 212) {
        cout << monthNames[6] << " " << (day - 181) << endl;
    } else if (day <= 243) {
        cout << monthNames[7] << " " << (day - 212) << endl;
    } else if (day <= 273) {
        cout << monthNames[8] << " " << (day - 243) << endl;
    } else if (day <= 304) {
        cout << monthNames[9] << " " << (day - 273) << endl;
    } else if (day <= 334) {
        cout << monthNames[10] << " " << (day - 304) << endl;
    } else {
        cout << monthNames[11] << " " << (day - 334) << endl;
    }
}
