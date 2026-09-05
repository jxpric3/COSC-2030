// Tree class
#ifndef TREE_H
#define TREE_H

#include <iostream>
#include <cstring>
using namespace std;

class Tree
{
private:
   int branches;
   double rootLength;
   double height; 
   double *branchLengths;

   void createBranchLengths()
   {
     branchLengths = new double[branches];
     for (int i = 0; i < branches; i++)
       branchLengths[i] = 0.0;  
   }


public:
   // Constructor
  Tree(int b, double f, double h )
  { branches = b; rootLength = f; height = h; createBranchLengths();}

  // Default Constructor
  Tree()
  {branches = 1; rootLength = 0.0; height = 0.0; createBranchLengths();}


  ~Tree()
  { delete [] branchLengths; }
      
  void setBranches(int n)
  { branches = n; }
	
	int getBranches()
	{ return branches; }
    
	void setRootLength(double f)
  { rootLength = f; }

  int getRootLength()
  { return rootLength; }

  void setBranchLengths(int index, double length)
  { branchLengths[index] = length; }

  float getBranchLengths(int index)
  { return branchLengths[index]; }

  void printInfo();  
  void printBranchLengths();

};


#endif  
