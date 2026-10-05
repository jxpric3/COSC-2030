#include "Money.h"

#include <iostream>
#include <string> 


using namespace std;

template <typename T> 
T minimum(T a, T b)
{
    if(a < b)
    {
        return a; 
    }
    else
    {
        return b; 
    }

}

template <typename T> 
T maximum(T a, T b)
{
    if(a > b)
    {
        return a;
    }
    else
    {
        return b; 
    }
}

int main()
{
    
    cout << "minimum(10, 20)      = " << minimum(10, 20) << endl;
    cout << "maximum(10, 20)      = " << maximum(10, 20) << endl;
    cout << "minimum(3.14, 2.72)  = " << minimum(3.14, 2.72) << endl;
    cout << "maximum('a', 'z')    = " << maximum('a', 'z') << endl;

    
    Money wallet(45, 75);   
    Money price(45, 90);    

    cout << "\nComparing Money objects:" << endl;

cout << "minimum = ";
minimum(wallet, price).printInfo();   
cout << endl;

cout << "maximum = ";
maximum(wallet, price).printInfo();
cout << endl;

    return 0;
}