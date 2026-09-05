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
  Tree tree2 = tree1;
  cout << "Printing informationa about tree2 "  << endl;
  tree2.printInfo();
  tree2.printBranchLengths(); 

  cout << "\nChanging tree2 branch 0 branchLength to 89.2" << endl;
  tree2.setBranchLengths(0, 89.2);

  cout << " \nPrinting information about tree 1" << endl;
  tree1.printInfo();
  tree1.printBranchLengths(); 

 
}