#include "Sponsor.h"
#include <iostream>
#include <cstdlib>
using namespace std;

Sponsor::Sponsor(string n)
{
  name = n;
  amount = 0.0;
}

Sponsor::Sponsor(string n, double a)
{
  name = n;
  amount = a;
}

double Sponsor::getAmount()
{
  return amount;
}

double donation(double amount)
{
  int newArraySize = numDonations + 1; 
  
  double* tempArray = new double[newArraySize]; 

  for(int i = 0; i < numDonations; i++)
  {
    tempArray[i] = donationHistory[i];
  }

  tempArray[newArraySize -1] = amount; 

  delete [] donationHistory; 

  donationHistory = tempArray; 
}

string Sponsor::getName()
{
  return name;
}

void Sponsor::setName(string n)
{
  name = n;
}

void Sponsor::setAmount(double a)
{
  amount = a;
}

bool Sponsor::isBigDonor()
{
  if (amount > 1000)
  {
    return true;
  }
  else
    return false;
}

void Sponsor::displayInfo()
{
  cout << name << "\t" << amount << endl;
}