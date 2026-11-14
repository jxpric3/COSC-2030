#include <iostream>


using namespace std;

int sumWalkValue(int chosenValue); 

int main()
{
    int chosenValue = 0;
    int summaryValue = 0; 
    cout << "Enter a value:  ";
    cin >> chosenValue;


    summaryValue = sumWalkValue(chosenValue); 
    
    cout << "The sum of one to " << chosenValue << " is " << summaryValue  << endl; 
    
    return 0; 
}

int sumWalkValue(int chosenValue)
{
    int sum = 0;
    if(chosenValue == 1)
    { 
        return sum += chosenValue;

    }
    else
    {
        return sum += chosenValue + sumWalkValue(chosenValue - 1);
    }
}