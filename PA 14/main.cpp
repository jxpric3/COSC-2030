#include <iostream> 
#include "IntBinaryTree.h"

using namespace std; 

int main()
{
    IntBinaryTree myTree; 

    cout << "Initial tree stats (empty):" << endl;
    cout << "Number of nodes:      " << myTree.numNodes() << endl;
    cout << "Number of leaf nodes: " << myTree.numLeafNodes() << endl;
    cout << "Tree height:          " << myTree.treeHeight() << endl;
    cout << "Tree width:           " << myTree.treeWidth() << endl;

    cout << "Inserting the nodes (12, 8, 4, 3, 7, 18)" << endl; 

    myTree.insertNode(12);
    myTree.insertNode(8);
    myTree.insertNode(4);
    myTree.insertNode(3);
    myTree.insertNode(7);
    myTree.insertNode(18);

    cout << "Tree stats after insertions:" << endl;
    cout << "Number of nodes:      " << myTree.numNodes() << endl;
    cout << "Number of leaf nodes: " << myTree.numLeafNodes() << endl;
    cout << "Tree height:          " << myTree.treeHeight() << endl;
    cout << "Tree width:           " << myTree.treeWidth() << endl;

    cout << "Searching for 7 (in tree): ";
    if (myTree.searchNode(7))
    {
        cout << "Found" << endl;
    }
    else
    {
        cout << "Not found" << endl;
    }

    cout << "Searching for 99 (not in tree): ";
    if (myTree.searchNode(99))
    {
        cout << "Found" << endl;
    }
    else
    {
        cout << "Not found" << endl;
    }

    return 0; 
    
}