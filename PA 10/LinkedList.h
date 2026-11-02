 // A class template for holding a linked list. 
 // The node type is also a class template. 
 #ifndef LINKEDLIST_H 
 #define LINKEDLIST_H 
 #include <iostream>
 #include <string>

using namespace std;    
 
 //********************************************* 
 // The ListNode class creates a type used to  * 
 // store a node of the linked list.           * 
 //********************************************* 
 
 template <typename T> 
 class ListNode 
 { 
 public: 
     T value;           // Node value 
     ListNode<T> *next; // Pointer to the next node 
 
     // Constructor 
     ListNode (T nodeValue) 
         { value = nodeValue; 
           next = nullptr; } 
 }; 
 
 //********************************************* 
 // LinkedList class                           * 
 //********************************************* 
 
 template <typename T> 
 class LinkedList 
 { 
 private: 
     ListNode<T> *head; // List head pointer 
 
 public: 
     // Constructor 
     LinkedList() 
         { head = nullptr; } 

     LinkedList(const LinkedList<T>& other) 
     { 
        head = nullptr;
        ListNode<T>* lastPtr = nullptr; //track the last node in the new list
        ListNode<T>* nodePtr = other.head; //our navigation pointer, starts at the head of the other list

        while(nodePtr != nullptr) 
        { 
            ListNode<T>* newNode = new ListNode<T>(nodePtr->value); //create a new node, set the value to the value of the node in the other list - next is set to nullptr by the constructor

            if(head == nullptr) //if the new list is empty, set the head to the new node
            { 
                head = newNode; 
            } 
            else 
            { 
                lastPtr->next = newNode; 
                
            }
            lastPtr = newNode;
            nodePtr = nodePtr->next;
        }
     }
 
     // Destructor 
     ~LinkedList(); 
 
     // Linked list operations 
     void appendNode(T); 
     void insertNode(T); 
     void deleteNode(T); 
     void displayList() const; 
     void reverse();
     int search(T value) const;
     void insertByIndex(T value, int index);
     void deleteByIndex(int targetIndex);
     T& operator[](int index);

 }; 
 
 
 //************************************************** 
 // appendNode appends a node containing the value  * 
 // passed into newValue, to the end of the list.   * 
 //************************************************** 
 
 template <typename T> 
 void LinkedList<T>::appendNode(T newValue) 
 { 
     ListNode<T> *newNode; // To point to a new node 
     ListNode<T> *nodePtr; // To move through the list 
 
     // Allocate a new node and store newValue there. 
     newNode = new ListNode<T>(newValue); 
 
     // If there are no nodes in the list 
     // make newNode the first node. 
     if (!head) 
         head = newNode; 
     else // Otherwise, insert newNode at end. 
     { 
         // Initialize nodePtr to head of list. 
         nodePtr = head; 
 
         // Find the last node in the list. 
         while (nodePtr->next) 
             nodePtr = nodePtr->next; 
 
         // Insert newNode as the last node. 
         nodePtr->next = newNode; 
     } 
 } 
 
 //*************************************************** 
 // displayList shows the value stored in each node  * 
 // of the linked list pointed to by head.           * 
 //*************************************************** 
 
 template <typename T> 
 void LinkedList<T>::displayList() const 
 { 
     ListNode<T> *nodePtr; // To move through the list 
 
     // Position nodePtr at the head of the list. 
     nodePtr = head; 
 
     // While nodePtr points to a node, traverse 
     // the list. 
     while (nodePtr) 
     { 
         // Display the value in this node. 
         std::cout << nodePtr->value << std::endl; 
 
         // Move to the next node. 
         nodePtr = nodePtr->next; 
     } 
 } 
 
 //************************************************** 
 // The insertNode function inserts a node with     * 
 // newValue copied to its value member.            * 
 //************************************************** 
 
 template <typename T> 
 void LinkedList<T>::insertNode(T newValue) 
 { 
     ListNode<T> *newNode;                // A new node 
     ListNode<T> *nodePtr;                // To traverse the list 
     ListNode<T> *previousNode = nullptr; // The previous node 
 
     // Allocate a new node and store newValue there. 
     newNode = new ListNode<T>(newValue); 
 
     // If there are no nodes in the list 
     // make newNode the first node. 
     if (!head) 
     { 
         head = newNode; 
         newNode->next = nullptr; 
     } 
     else // Otherwise, insert newNode. 
     { 
         // Position nodePtr at the head of list. 
         nodePtr = head; 
 
         // Initialize previousNode to nullptr. 
         previousNode = nullptr; 
 
         // Skip all nodes whose value is less than newValue. 
         while (nodePtr != nullptr && nodePtr->value < newValue) 
         { 
             previousNode = nodePtr; 
             nodePtr = nodePtr->next; 
         } 
 
         // If the new node is to be the 1st in the list, 
         // insert it before all other nodes. 
         if (previousNode == nullptr) 
         { 
             head = newNode; 
             newNode->next = nodePtr; 
         } 
         else // Otherwise insert after the previous node. 
         { 
             previousNode->next = newNode; 
             newNode->next = nodePtr; 
         } 
     } 
 } 

 //****************************************************** 
 // The reverseList function reverses the linked list    * 
 //****************************************************** 
 
 template <typename T> 
  void LinkedList<T>::reverse() 
  { 
    ListNode<T> *nodePtr = head; 
    ListNode<T> *prevNode = nullptr;
    ListNode<T> *nextNode = nullptr;

    while (nodePtr != nullptr) 
    { 
        nextNode = nodePtr->next; 
        nodePtr->next = prevNode; 
        prevNode = nodePtr; 
        nodePtr = nextNode; 
    }
    head = prevNode; 
    
  }
 
 //****************************************************** 
 // The deleteNode function searches for a node         * 
 // with searchValue as its value. The node, if found,  * 
 // is deleted from the list and from memory.           * 
 //****************************************************** 
 
 template <typename T> 
 void LinkedList<T>::deleteNode(T searchValue) 
 { 
     ListNode<T> *nodePtr;      // To traverse the list 
     ListNode<T> *previousNode; // To point to the previous node 
 
     // If the list is empty, do nothing. 
     if (!head) 
         return; 
 
     // Determine if the first node is the one. 
     if (head->value == searchValue) 
     { 
         nodePtr = head->next; 
         delete head; 
         head = nodePtr; 
     } 
     else 
     { 
         // Initialize nodePtr to head of list 
         nodePtr = head; 
 
         // Skip all nodes whose value member is 
         // not equal to num. 
         while (nodePtr != nullptr && nodePtr->value != searchValue) 
         { 
             previousNode = nodePtr; 
             nodePtr = nodePtr->next; 
         } 
 
         // If nodePtr is not at the end of the list, 
         // link the previous node to the node after 
         // nodePtr, then delete nodePtr. 
         if (nodePtr) 
         { 
             previousNode->next = nodePtr->next; 
             delete nodePtr; 
         } 
     } 
 } 
 
 //************************************************** 
 // Destructor                                      * 
 // This function deletes every node in the list.   * 
 //************************************************** 
 
 template <typename T> 
 LinkedList<T>::~LinkedList() 
 { 
     ListNode<T> *nodePtr;  // To traverse the list 
     ListNode<T> *nextNode; // To point to the next node 
 
     // Position nodePtr at the head of the list. 
     nodePtr = head; 
 
     // While nodePtr is not at the end of the list... 
     while (nodePtr != nullptr) 
     { 
         // Save a pointer to the next node. 
         nextNode = nodePtr->next; 
 
         // Delete the current node. 
         delete nodePtr; 
 
         // Position nodePtr at the next node. 
         nodePtr = nextNode; 
     } 
 } 
 template <typename T> 
 int LinkedList<T>::search(T value) const
 {
    ListNode<T> *nodePtr = head;
    int index = 0;

    while (nodePtr != nullptr)
    {
        if (nodePtr->value == value)
        {
            return index;
        }
        nodePtr = nodePtr->next;
        index++;
    }

    return -1; // Value not found
 }

 template <typename T> 
 void LinkedList<T>::insertByIndex(T value, int index)
 {
    if(index < 0) 
    {
       throw string("Index cannot be negative.");
    }

    ListNode<T> *newNode = new ListNode<T>(value);
    
    if(!head) 
    {
        head = newNode;
        return;
    }

    if(index == 0) 
    {
        newNode->next = head;
        head = newNode;
        return;
    }

    ListNode<T> *nodePtr = head;
    int numberToSkip = 1; 
    
    while(numberToSkip <= index)
    {
        if(nodePtr->next == nullptr || numberToSkip == index) 
        {
            ListNode <T> *tempPtr = nodePtr->next;
            nodePtr->next = newNode;
            newNode->next = tempPtr;
            return;
        }
        
        nodePtr = nodePtr->next;
        numberToSkip++;
        
    }
 }

template <typename T> 
void LinkedList<T>::deleteByIndex(int targetIndex)
{
  int positionCounter = 0; 

  if(targetIndex < 0) 
  {
    throw string("Index cannot be negative.");
  }
  
  ListNode<T> *nodePtr = head;
  ListNode<T> *previousNode = nullptr;

  if(targetIndex == 0 && nodePtr != nullptr) 
  {
    head = nodePtr->next;
    delete nodePtr;
    return;
  }

  while(nodePtr != nullptr)
  {
    if(positionCounter == targetIndex) 
    {
      previousNode->next = nodePtr->next;
      delete nodePtr;
      return;
    }
    previousNode = nodePtr;
    nodePtr = nodePtr->next;
    positionCounter++;  
  }

}

template <typename T>
T& LinkedList<T>::operator[](int index){
   
    if(index < 0) {
      throw string("Index cannot be negative.");
   }
   
    ListNode<T> *nodePtr = head;
     int positionCounter = 0;
    
     while(nodePtr != nullptr) {
          if(positionCounter == index) {
                return nodePtr->value;
          }
          nodePtr = nodePtr->next;
          positionCounter++;
     }
    
     throw string("Index out of bounds.");
}
#endif