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
    vector<string> lines_openmp, lines;

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

    lines_openmp = lines; // Copy the original lines to the OpenMP vector

    inputFile.close();

    auto start = chrono::steady_clock::now();
    
    for(int i = 0; i < lines.size(); i++)
    {
        int spaceCount = 0;
        for(int j = 0; j < lines[i].size(); j++)
        {
            char testChar = lines[i][j];
            
            if(isspace(testChar))
                spaceCount++;
        }

        lines[i] += "Total number of spaces in line " + to_string(i+1) + ": " + to_string(spaceCount);
        
    }

    
    auto end = chrono::steady_clock::now();
    auto duration = chrono::duration_cast<chrono::milliseconds>(end - start);

    cout << "Time taken to read and process the file without parallel processing: " << duration.count() << " milliseconds" << endl;

    //parellelize the loop using OpenMP here
    //compiler note: g++ -fopenmp vectorsStrings.cpp -o vectorsStrings
    
    start = chrono::steady_clock::now();

    #pragma omp parallel for
    for(int i = 0; i < lines_openmp.size(); i++)
    {
        int spaceCount = 0;
        for(int j = 0; j < lines_openmp[i].size(); j++)
        {
            char testChar = lines_openmp[i][j];
            
            if(isspace(testChar))
                spaceCount++;
        }

        lines_openmp[i] += "Total number of spaces in line " + to_string(i+1) + ": " + to_string(spaceCount);
        
    }

    end = chrono::steady_clock::now();
    duration = chrono::duration_cast<chrono::milliseconds>(end - start);

    cout << "Time taken to read and process the file with parallel processing: " << duration.count() << " milliseconds" << endl;



    return 0;
}