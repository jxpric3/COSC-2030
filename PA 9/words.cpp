#include <iostream>
#include <fstream>    
#include <string>
#include <cctype>
#include <set>

using namespace std;

int main()
{
    string fileName;
    string word;
    string newWord; 

    set<string> uniqueWords;

    cout << "Enter the file name: ";
    getline(cin, fileName);      

    ifstream inFile;
    inFile.open(fileName);      

    if (inFile.fail())           
    {
        cout << "Could not open " << fileName << endl;
        return 1;
    }

    while(inFile >> word) 
    {
        newWord = "";
        for (char c : word) 
        {
            c = tolower(c);  
            if (isalpha(c)) 
            {
                newWord += c;
            }
        }

        if (!newWord.empty()) 
        {
            uniqueWords.insert(newWord);
        }
        
    }

    cout << "Unique words in the file:" << endl;
    for(string printWord : uniqueWords) 
    {
        cout << printWord << endl;
    }

    inFile.close();
    return 0;
}