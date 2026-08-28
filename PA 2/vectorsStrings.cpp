#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cctype>
#include <thread>
#include <chrono>
#include <omp.h>


using namespace std;

int main() {
    string filename;
    string line;
    vector<string> lines;

    int spaceCount = 0;

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
    
    //parellelize the loop using OpenMP here? 
    //compiler note: g++ -fopenmp vectorsStrings.cpp -o vectorsStrings
    
    for(int i = 0; i < lines.size(); i++)
    {
        for(int j = 0; j < lines[i].size(); j++)
        {
            char testChar = lines[i][j];
            
            if(isspace(testChar))
                spaceCount++;
        }
        cout << endl;
    }

    lines.push_back("Total number of spaces: " + to_string(spaceCount));

    cout << "Total number of spaces: " << spaceCount << endl;   

    ofstream outputFile(filename, ios::app);

    outputFile << "Total number of spaces: " << spaceCount << endl;
    outputFile.close();



    return 0;
}