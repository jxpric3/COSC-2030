#include "SimpleVector.h"
#include "Money.h"
#include <iostream>

using namespace std;

int main()
{
    SimpleVector<Money> moneyVector(3);
    moneyVector[0] = Money(10, 50);
    moneyVector[1] = Money(20, 75);
    moneyVector[2] = Money(5, 25);

    SimpleVector<char> charVector(3);
    

    return 0; 

}