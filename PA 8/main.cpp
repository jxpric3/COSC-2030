#include "SimpleVector.h"
#include "Money.h"
#include <iostream>

using namespace std;

int main()
{
    SimpleVector<int> intVector(3);
    intVector[0] = 10;
    intVector[1] = 20;
    intVector[2] = 5;

    SimpleVector<char> charVector(3);
    charVector[0] = 'A';
    charVector[1] = 'B';
    charVector[2] = 'C';

    SimpleVector<double> doubleVector(3);
    doubleVector[0] = 1.1;
    doubleVector[1] = 2.2;
    doubleVector[2] = 3.3;


    SimpleVector<Money> moneyVector(3);
    moneyVector[0] = Money(10, 50);
    moneyVector[1] = Money(20, 75);
    moneyVector[2] = Money(5, 25);

    cout << "Here is the contents of the intVector: " << endl;
    for (int i = 0; i < intVector.size(); i++)
    {
        cout << intVector[i] << " ";
    }
    cout << endl;
    cout << "Max of intVector: " << intVector.max() << endl;

    intVector.push_back(30);
    cout << "After push_back, contents of intVector: " << endl; 
    for (int i = 0; i < intVector.size(); i++)
    {
        cout << intVector[i] << " ";
    }
    cout << endl;

    cout << "The captured value from pop_back is: " << intVector.pop_back() << endl;
    cout << "After pop_back, contents of intVector: " << endl;
    for (int i = 0; i < intVector.size(); i++)
    {
        cout << intVector[i] << " ";
    }
    cout << endl;


    cout << "Here is the contents of the charVector: " << endl;
    for (int i = 0; i < charVector.size(); i++)
    {
        cout << charVector[i] << " ";
    }
    cout << endl;
    cout << "Max of charVector: " << charVector.max() << endl;      
    charVector.push_back('D');
    cout << "After push_back, contents of charVector: " << endl;
    for (int i = 0; i < charVector.size(); i++)
    {
        cout << charVector[i] << " ";
    }
    cout << endl;

    cout << "The captured value from pop_back is: " << charVector.pop_back() << endl;
    cout << "After pop_back, contents of charVector: " << endl;
    for (int i = 0; i < charVector.size(); i++)
    {
        cout << charVector[i] << " ";
    }
    cout << endl;

    cout << "Here is the contents of the doubleVector: " << endl;
    for (int i = 0; i < doubleVector.size(); i++)
    {
        cout << doubleVector[i] << " ";
    }
    cout << endl;
    cout << "Max of doubleVector: " << doubleVector.max() << endl;
    doubleVector.push_back(4.4);
    cout << "After push_back, contents of doubleVector: " << endl;
    for (int i = 0; i < doubleVector.size(); i++)
    {
        cout << doubleVector[i] << " ";
    }
    cout << endl;
    cout << "The captured value from pop_back is: " << doubleVector.pop_back() << endl;
    cout << "After pop_back, contents of doubleVector: " << endl;
    for (int i = 0; i < doubleVector.size(); i++)
    {
        cout << doubleVector[i] << " ";
    }
    cout << endl;
    
    cout << "Here is the contents of the moneyVector: " << endl;
    for (int i = 0; i < moneyVector.size(); i++)
    {
        cout << moneyVector[i] << " ";
    }
    cout << endl;
    cout << "Max of moneyVector: " << moneyVector.max() << endl;
    
    moneyVector.push_back(Money(15, 0));
    cout << "After push_back, contents of moneyVector: " << endl;
    for (int i = 0; i < moneyVector.size(); i++)
    {
        cout << moneyVector[i] << " ";
    }
    cout << endl;

    cout << "The captured value from pop_back is: " << moneyVector.pop_back() << endl;
    cout << "After pop_back, contents of moneyVector: " << endl;
    for (int i = 0; i < moneyVector.size(); i++)
    {
        cout << moneyVector[i] << " ";
    }
    cout << endl;
        
        
    

    return 0; 

}