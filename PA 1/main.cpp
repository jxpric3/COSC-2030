#include <iostream>
#include "Sponsor.h"
using namespace std; 

int main() {

  int sponsorCount = 0; 

  cout << "How many sponsors are there: "; 
  cin >> sponsorCount; 

  Sponsor* sponsorList = new Sponsor[sponsorCount]; 

  for(int i = 0; i < sponsorCount; i++)
  {
    
  }

  Sponsor sponsor1("Josie Bigspender");
  Sponsor sponsor2("Joe LittleSpender", 100);

  sponsor1.setAmount(1200.56);

  sponsor2.displayInfo();
  sponsor1.displayInfo();
}