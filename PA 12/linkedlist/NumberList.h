// Specification file for the NumberList class
#ifndef NUMBERLIST_H
#define NUMBERLIST_H

class NumberList
{
private:
   // Declare a structure for the list
   struct ListNode
   {
      double value;
      struct ListNode *next;
   }; 

   ListNode *head;    // List head pointer
      
   // Private member functions
   int countNodes(ListNode *) const;
   void showReverse(ListNode *) const;
   double maxNode(ListNode *) const; 
   void deleteList(ListNode *) const; 
   
public:
   // Constructor
   NumberList()
      { head = nullptr; }
         
   // Destructor
   ~NumberList();
      
   // Linked List Operations
   void appendNode(double);
   void insertNode(double);
   void deleteNode(double);
   void displayList() const;
   int numNodes() const
   { 
        return countNodes(head); 
    }
   void displayBackwards() const
    { 
        showReverse(head); 
    }
    double maxNode() const
    {
        return maxNode(head);
        
    }

    void deleteList()
    {
        deleteList(head); 
        head = nullptr; 
    }
};
#endif