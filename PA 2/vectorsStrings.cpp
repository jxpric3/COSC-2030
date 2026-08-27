#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main() {
    string filename;
    string line;
    vector<string> lines;

    cout << "Enter the name of the file to read: ";
    getline(cin, filename);

    ifstream inputFile(filename); 

    while(!inputFile) 
    {
        cout << "Error opening file. Please enter a valid filename: ";
        getline(cin, filename);
        inputFile.open(filename);
    }

    while(getline(inputFile, line,'\n')) 
    {
        lines.push_back(line);
    }

    inputFile.close();

    return 0;
}