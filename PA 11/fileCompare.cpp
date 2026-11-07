#include <iostream>
#include <fstream>
#include <queue>
#include <string>

using namespace std;

int main() {
    ifstream infile1, infile2;
    queue<char> queue1, queue2;
    char charGrab;
    bool match = true;
    string filename1, filename2;

    cout << "Enter the first filename: ";
    cin >> filename1;
    infile1.open(filename1);

    while (!infile1) {
        infile1.clear();
        cout << "Error opening file. Enter the first filename again: ";
        cin >> filename1;
        infile1.open(filename1);
    }

    cout << "Enter the second filename: ";
    cin >> filename2;
    infile2.open(filename2);

    while (!infile2) {
        cout << "Error opening file. Enter the second filename again: ";
        cin >> filename2;
        infile2.open(filename2);
    }

    while (infile1.get(charGrab)) {
        queue1.push(charGrab);
    }

    while (infile2.get(charGrab)) {
        queue2.push(charGrab);
    }

    if (queue1.size() != queue2.size()) {
        cout << "Files are not the same size, therefore they are not the same." << endl;
        match = false;
    } else {
        match = true;
        while (!queue1.empty()) {
            if (queue1.front() != queue2.front()) {
                cout << "Files are not the same" << endl;
                match = false;
                break; 
            } else {
                queue1.pop();
                queue2.pop();
            }
        }
        
        if (match) {
            cout << "Files are the same" << endl;
        }
    }

    infile1.close();
    infile2.close();

    return 0;
}