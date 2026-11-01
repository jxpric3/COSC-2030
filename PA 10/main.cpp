#include <iostream> 
#include "LinkedList.h"

using namespace std;

int main()
{
    LinkedList<int> list;
    LinkedList<int> emptyList; // Create an empty list 
    LinkedList<int> singleNodeList; // Create a list with a single node
    LinkedList<int> dupeList; // Create a list with duplicate values
 
    //Append the first list with some values
    list.appendNode(7);
    list.appendNode(3);
    list.appendNode(9);
    list.appendNode(12);

    //Append the singleNodeList with a single value
    singleNodeList.appendNode(5);

    //Append the dupeList with some duplicate values
    dupeList.appendNode(7);
    dupeList.appendNode(3);
    dupeList.appendNode(7);
    

    LinkedList<int> copiedList(list); // Create a copy of the list using the copy constructor

    cout << "Here is the list: " << endl;
    list.displayList();
    cout << endl;

    cout << "Here is the copied list: " << endl;
    copiedList.displayList();
    cout << endl; 

    cout << "Reversing the list..." << endl;
    list.reverse();
    cout << "Here is the reversed list: " << endl;
    list.displayList();
    cout << endl;
    
    cout << "And here is the copied list (should be unchanged): " << endl;
    copiedList.displayList();
    cout << endl;

    cout << "Testing the reverse function on the single node list: " << endl;
    singleNodeList.reverse();
    cout << "Here is the single node list after reversing: " << endl;
    singleNodeList.displayList();
    cout << endl;

    cout << "Testing the reverse function on the empty list: " << endl;
    emptyList.reverse();
    cout << "Here is the empty list after reversing (should still be empty): " << endl;
    emptyList.displayList();
    cout << endl;   

    cout << "Testing the reverse function on the list with duplicate values: " << endl;
    dupeList.reverse();
    cout << "Here is the list with duplicate values after reversing: " << endl;
    dupeList.displayList();
    cout << endl;

    
    cout << "Testing the search function on the list: " << endl;    
    cout << "Index of 7: " << list.search(7) << endl;
    cout << "Index of 3: " << list.search(3) << endl;
    cout << "Index of 9: " << list.search(9) << endl;
    cout << "Index of 5: " << list.search(5) << endl;

    cout << "Testing the search function on the single node list: " << endl;
    cout << "Index of 5: " << singleNodeList.search(5) << endl;
    cout << "Index of 10: " << singleNodeList.search(10) << endl;
    cout << "Index of 3: " << singleNodeList.search(3) << endl;

    cout << "Testing the search function on the empty list: " << endl;
    cout << "Index of 5: " << emptyList.search(5) << endl;
    

    cout << "Testing the search function on the list with duplicate values: " << endl;
    cout << "Index of 7: " << dupeList.search(7) << endl;
    cout << "Index of 3: " << dupeList.search(3) << endl;
    cout << "Index of 9: " << dupeList.search(9) << endl;
    cout << "Index of 5: " << dupeList.search(5) << endl;
    
    try
    {
        list.insertByIndex(42, 01);
        cout << "Inserted" << endl;
    }

    catch (string msg)
    {
        cout << "Error: " << msg << endl;
    }
    cout << "Done" << endl; 

    try
    {
        list.deleteByIndex(1);
        cout << "Deleted" << endl;  
    }
    catch (string msg)
    {
        cout << "Error: " << msg << endl;
    }
    cout << "Done" << endl; 

    return 0; 
}