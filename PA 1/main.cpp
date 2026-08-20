#include <iostream>
#include "Sponsor.h"
using namespace std; 

int main() {

  int sponsorCount = 0; 
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
    
  }

  Sponsor sponsor1("Josie Bigspender");
  Sponsor sponsor2("Joe LittleSpender", 100);

  sponsor1.setAmount(1200.56);

  sponsor2.displayInfo();
  sponsor1.displayInfo();

  return 0;
}