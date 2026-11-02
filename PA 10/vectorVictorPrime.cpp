#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class primeChecker {
    public: 
        void operator()(int n)
        {
            int i = 2; 
            while(i < n)
            {
                if(n % i == 0)
                {
                    
                    return;
                }
                i++;
            }
            cout << n << " ";
        }


};

int main()
{
    int inputValue; 
    cout << "Enter a positive integer greater than 1: ";
    cin >> inputValue;

    while(inputValue <= 1)
    {
        cout << "Please enter a positive integer greater than 1: ";
        cin >> inputValue;
    }

    vector<int> numbers;
    int loopCounter = 1;

    while(loopCounter < inputValue)
    {
        loopCounter++;
        numbers.push_back(loopCounter);
     
    }

    cout << "The prime numbers between 1 and including " << inputValue << " are: ";
    primeChecker check; 
    for_each(numbers.begin(), numbers.end(), check);
    cout << endl;

    return 0; 
}
    