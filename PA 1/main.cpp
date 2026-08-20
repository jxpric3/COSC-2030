#include <iostream>
#include "Sponsor.h"
using namespace std; 

int main() {

  int sponsorCount = 0; 
  double donationAmount = 0.0;
  string sponsorName;
  string sponsorCity;


  cout << "How many sponsors are there: "; 
  cin >> sponsorCount; 

  Sponsor* sponsorList = new Sponsor[sponsorCount]; 

  for(int i = 0; i < sponsorCount; i++)
  {
    cout << "Enter the name of sponsor " << i + 1 << ": ";
    cin >> sponsorName;
    sponsorList[i].setName(sponsorName);

    cout << "City where " << sponsorName << " lives: ";
    cin >> sponsorCity;
    sponsorList[i].setCity(sponsorCity);

    do
    {
      cout << "Enter donation, enter 0 when done: ";
      cin >> donationAmount;
      if (donationAmount > 0)
      {
        sponsorList[i].donation(donationAmount);
      }
    } while (donationAmount > 0);

  }

  Sponsor sponsor1("Josie Bigspender");
  Sponsor sponsor2("Joe LittleSpender", 100);

  sponsor1.setAmount(1200.56);

  //sponsor2.displayInfo();
  //sponsor1.displayInfo();

  for (int i = 0; i < sponsorCount; i++)
  {
    sponsorList[i].displayInfo();
  }

  delete [] sponsorList;

  return 0;
}