#ifndef PARKINGMETER_H
#define PARKINGMETER_H
class ParkingMeter
{
    private: 
    int minutesPurchased; 
    
    public: 

    ParkingMeter();
    ParkingMeter(int minutes);

    void setMinutesPurchased(int purchaseMinutes);

    int getMinutesPurchased() const; 

};
#endif