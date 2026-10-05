#ifndef MONEY_H
#define MONEY_H

#include <iostream> 

using namespace std;

class Money
{
private:
    long totalCents;   
public:
    Money(int dollars = 0, int cents = 0)
    {
        totalCents = (dollars * 100) + cents; 
    }

    bool operator<(const Money& right) const
    {
        return totalCents < right.totalCents;
    }

    bool operator>(const Money& right) const
    {
        return totalCents > right.totalCents;
    }

    void printInfo() const
    {
        cout << "$" << totalCents / 100 << "." << (totalCents % 100 < 10 ? "0" : "") << totalCents % 100;
    }

};
#endif