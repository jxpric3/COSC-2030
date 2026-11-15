#include <iostream>
#include <string>

using namespace std;

const string COIN_NAMES[5] = {"Half Dollar", "Quarter", "Dime", "Nickel", "Penny"};
const int COIN_VALUES[5] = {50, 25, 10, 5, 1};

void coins(int amount, int whichCoin, int coinsUsed[], int &solutionCount); 

int main()
{
    
    int coinsUsed[5] = {0, 0, 0, 0, 0};
    int whichCoin = 0;
    int solutionCount = 0; 
    int inputValue = 0; 

    cout << "Give us the amount (in whole cents) we are finding solutions for: "; 
    cin >> inputValue; 
    while(inputValue < 0 || inputValue > 100)
    {
        cout << "please enter an amount that is greater than or equal to zero and less than or equal 100: ";
        cin >> inputValue;
    }

    coins(inputValue, whichCoin, coinsUsed, solutionCount);

    cout << "The number of solutions found was: " << solutionCount << endl; 


    return 0;

}
    

void coins(int amount, int whichCoin, int coinsUsed[], int &solutionCount)
{
    int maxFit = 0; 
    int leftover = 0; 

    if(whichCoin == 4){
        coinsUsed[4] = amount; 
        solutionCount += 1;
        cout << "Solution found: ";
        for(int i = 0; i < 5; i++)
        {   
            cout << COIN_NAMES[i] << ": " << coinsUsed[i] << " ";    
            
        
        }
        cout << endl;

    }
        
    else{
        maxFit = amount / COIN_VALUES[whichCoin];
        for(int howMany = maxFit; howMany >= 0; howMany--)
        {
            coinsUsed[whichCoin] = howMany;
            leftover = amount - (COIN_VALUES[whichCoin] * howMany); 
            coins(leftover, whichCoin + 1, coinsUsed, solutionCount);

        }
            
    } 
        

}
    

