#include <iostream>
#include "NumberList.h"
using namespace std;

int main()
{
    NumberList list; 

   list.appendNode(12.5);
   list.appendNode(45.2);
   list.appendNode(8.9);
   list.appendNode(99.1);
   list.appendNode(23.4);

   cout << "Here are the values in the list:" << endl;
   list.displayList();

   cout << "The Largest value in the list: " << list.maxNode() << endl;

   cout << "Deleting all nodes in a VERY recursive fashion." << endl;
   list.deleteList();

   cout << "Number of nodes remaining: " << list.numNodes() << endl;

   

    return 0; 

}