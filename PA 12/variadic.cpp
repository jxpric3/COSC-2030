#include <iostream>

using namespace std;

template <typename T> 
void display(T lastArg)
{
    cout << lastArg << endl; 
}

template <typename T, typename... TypeArgs>
void display(T firstArg, TypeArgs... remainingArgs)
{
    cout << firstArg << " ";
    display(remainingArgs...); 
}

int main()
{
    
    display("one", "two", "three", "four");
    display(1,2,3,4); 
    
    return 0; 

}