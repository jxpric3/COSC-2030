#include<iostream> 
#include <string>

using namespace std;


bool palindrome(string input, int startIndex, int endIndex);

int main()
{
    string userInput; 

    int startIndex = 0; 
    int endIndex = 0;

    cout << "Enter a string for Palindrome assessment: ";
    getline(cin, userInput); 

    while(userInput.empty())
    {
        cout << "Please enter a non empty string for assessment:"; 
        getline(cin, userInput); 
    }

    endIndex = userInput.length(); 

    if(palindrome(userInput, startIndex, endIndex))
    {
        cout << "Your string is a palindrome!" << endl;

    }
    else
    {
        cout << "Your string is not a palindrome. : - ( " << endl;
    }
    
    return 0; 

}

bool palindrome(string input, int startIndex, int endIndex)
{
   if(endIndex - startIndex <= 0) 
   {
        return true; 
   }
   else if(input[startIndex] != input[endIndex])
   {
    return false; 
   }
   else
   {
    return palindrome(input, startIndex + 1, endIndex -1);      
   }
}

