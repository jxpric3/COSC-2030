#include <iostream> 
#include "IntBinaryTree.h"

using namespace std; 

int main()
{
    IntBinaryTree myTree; 

    cout << "Inserting the nodes." << endl; 

    myTree.insertNode(12);
    myTree.insertNode(8);
    myTree.insertNode(4);
    myTree.insertNode(3);
    myTree.insertNode(7);
    myTree.insertNode(18);

    cout << "The Number of nodes: " << myTree.numNodes() << endl; 
    
}