
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
    double *donationHistory; 
  
  public:
    Sponsor(string, double);
    Sponsor(string);
    void setName(string);
    void setAmount(double);
    string getName();
    double getAmount();
    double donation(double);
    bool isBigDonor(); 
    void displayInfo(); 
};
#endif