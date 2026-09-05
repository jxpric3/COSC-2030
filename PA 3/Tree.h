// Tree class
#ifndef TREE_H
#define TREE_H

#include <iostream>
#include <cstring>
using namespace std;

class Tree
{
  //friend function 
  friend double branchMutation(Tree &treeObject); 
private:
   static int treeObjectCount; //static variable for keeping count of tree objects. 
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
  { treeObjectCount++; branches = b; rootLength = f; height = h; createBranchLengths(); }

  // Default Constructor
  Tree()
  {treeObjectCount++; branches = 1; rootLength = 0.0; height = 0.0; createBranchLengths(); }

  //copy constructor
   Tree(const Tree &newTree)
  {
    treeObjectCount++;
    branches = newTree.branches; 
    rootLength = newTree.rootLength;
    height = newTree.height; 
    createBranchLengths(); 

    for(int i = 0; i < branches; i++){
      branchLengths[i] = newTree.branchLengths[i]; 
      }
  }

  ~Tree()
  { delete [] branchLengths; treeObjectCount--;}
      
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

  int getTreeObjectCount() const; //function for retrieving the count of tree objects. 

  

};

 

#endif