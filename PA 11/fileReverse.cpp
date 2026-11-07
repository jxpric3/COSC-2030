#include <iostream>
#include <fstream>
#include <stack> 
#include <string> 

using namespace std;

int main() 
{
    ifstream infile; 
    ofstream outfile;

    char charGrab; 

    stack<char> charStack;
    string fileName;

    cout << "Enter the name of the file to reverse: ";
    cin >> fileName;
    infile.open(fileName);

    while(!infile)
    {
        cout << "Error opening file. Please enter a valid file name: ";
        cin >> fileName;
        infile.open(fileName);
    }

    while (infile.get(charGrab))
    {
        charStack.push(charGrab);
    }

    outfile.open("reversed.txt");

    while (!charStack.empty())
    {
        charGrab = charStack.top();
        charStack.pop();
        outfile << charGrab;

    }

    infile.close();
    outfile.close();

    return 0;

}