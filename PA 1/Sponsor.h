
#ifndef SPONSOR_H  // preprocessor directives
// (first part of compiling)  if the constant SPONSOR_H
// is not defined, then define it and include the rest of the
// code 
#define SPONSOR_H
#include <iostream>
using namespace std; 

class Sponsor
{
  private:  // access specifiers
    string name;
    string city; 
    double amount;
    int numDonations; 
    double* donations; 
  
  public:
    Sponsor(); //default constructor
    Sponsor(string, double);
    Sponsor(string);
    void setName(string);
    void setCity(string);
    void setAmount(double);
    string getName();
    string getCity();
    double getAmount();
    double donation(double);
    bool isBigDonor(); 
    void displayInfo(); 
};
#endif