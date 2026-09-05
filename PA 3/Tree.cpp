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

//object count 
int Tree::getTreeObjectCount() const
{
  return treeObjectCount; 
}

double branchMutation(Tree &treeObject)
{
  double newSum = 0; 
  int branchCount = treeObject.getBranches();

  for(int i = 0; i < branchCount; i++)
  {
    treeObject.branchLengths[i] += 1.0; 
    newSum += treeObject.branchLengths[i];

  }
  return newSum;  


    
}

int Tree::treeObjectCount = 0;