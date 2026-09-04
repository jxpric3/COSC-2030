#include "Tree.h"
#include <iostream>
using namespace std;



// printInfo
void Tree::printInfo() 
{ 
  cout << "This tree has " << branches << " branches,  " << rootLength << " rootLength and " << height << " height" << endl; 
  cout << "branchLengths: "; 
  for (int i = 0; i < branches; i++)
    cout << branchLengths[i] << " ";
  cout << endl;  
}

void Tree::printBranchLengths()
{ 
  for (int i = 0; i < branches; i ++)
  {
    cout << branchLengths[i] << " ";
  }
    cout << endl; 
}


