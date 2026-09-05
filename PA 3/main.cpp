#include <iostream>
#include "Tree.h"
using namespace std;

// What's going on with this code?

int main() {
  Tree tree1(3, 21.4, 46.8);

  tree1.setBranchLengths(0, 2.3);
  tree1.setBranchLengths(1, 5.6);
  tree1.setBranchLengths(2, 1.0);

  cout << "Printing information about tree1" << endl;
  tree1.printInfo();
  tree1.printBranchLengths();  
  
  cout << endl << "Now creating Tree tree2 = tree2\n";
  /*To perform this operation correctly we need a copy constructor that will copy all of the elements of the object
  while also creating a new dynamic array for this object with its own memory address. Instead of the new object's 
  pointer pointing to the address of object 1's array. This also ensures both dynamic arrays are properly disposed of.
  */
  Tree tree2 = tree1; 
  
  cout << "Printing informationa about tree2 "  << endl;
  tree2.printInfo();
  tree2.printBranchLengths(); 

  cout << "\nChanging tree2 branch 0 branchLength to 89.2" << endl;
  tree2.setBranchLengths(0, 89.2);

  cout << " \nPrinting information about tree 1" << endl;
  tree1.printInfo();
  tree1.printBranchLengths(); 

  cout << "Here is tree2 before the friend of the Tree class mutation function call:" << endl; 
  tree2.printBranchLengths(); 

  int branchCount = tree2.getBranches();
  double branchLengthSum = 0; 
  

  for(int i = 0; i < branchCount; i++)
  {
    branchLengthSum += tree2.getBranchLengths(i);
  }

  cout << "The sum length of all branches for tree2 before mutation is : " << branchLengthSum << endl; 

   double returnedSum = branchMutation(tree2);

  cout << "Here is tree2 AFTER the friend of the Tree class mutation function call:" << endl; 
  tree2.printBranchLengths(); 

  double mutatedBranchLengthSum = 0;

  for(int i = 0; i < branchCount; i++)
  {
    mutatedBranchLengthSum += tree2.getBranchLengths(i);
  }

 
  cout << "Function returned: " << returnedSum << endl;
  cout << "Independently computed post-mutation sum: " << mutatedBranchLengthSum << endl;

  cout << "Our total number of Tree objects in the program stands at: " << tree1.getTreeObjectCount() << endl;

  
}

