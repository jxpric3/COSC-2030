#include <iostream> 
#include <stack> 
#include <string>

using namespace std;

int main()
{
   bool tripwire = false; 
   string input;
   stack<char> myStack; 

   cout << "Please enter a string to check for balanced parentheses: ";
   getline(cin, input);

    for (int i = 0; i < input.length(); i++) 
    {
        if (input[i] == '(') 
        {
            myStack.push('('); 
        } 
        else if (input[i] == ')') 
        {
            if (myStack.empty()) 
            {
                tripwire = true; 
                break; 
            } 
            else 
            {
                myStack.pop(); 
            } 
        } 
    }

    if (myStack.empty() && !tripwire) 
    {
        cout << "The string is balanced." << endl; 
    } 
    else 
    {
        cout << "The string is NOT balanced." << endl; 
    }




   return 0;

    
}

