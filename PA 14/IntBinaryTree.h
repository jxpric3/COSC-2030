// Specification file for the IntBinaryTree class
#ifndef INTBINARYTREE_H
#define INTBINARYTREE_H

class IntBinaryTree
{
private:
   struct TreeNode
   {
      int value;         // The value in the node
      TreeNode *left;    // Pointer to left child node
      TreeNode *right;   // Pointer to right child node
   };

   TreeNode *root;       // Pointer to the root node
   
   // Private member functions
   void insert(TreeNode *&, TreeNode *&);
   void destroySubTree(TreeNode *);
   void deleteNode(int, TreeNode *&);
   void makeDeletion(TreeNode *&);
   void displayInOrder(TreeNode *) const;
   void displayPreOrder(TreeNode *) const;
   void displayPostOrder(TreeNode *) const;
   
   int nodeCount(TreeNode *&) const; 
   int leafCount(TreeNode *) const; 
   int getHeight(TreeNode *) const; 
   int getLevelWidth(TreeNode *, int) const; 
   
public:
   // Constructor
   IntBinaryTree()
      { root = nullptr; }
      
   // Destructor
   ~IntBinaryTree()
      { destroySubTree(root); }
      
   // Binary tree operations
   void insertNode(int);
   bool searchNode(int);
   void remove(int);
   
   void displayInOrder() const
      {  displayInOrder(root); }
      
   void displayPreOrder() const
      {  displayPreOrder(root); }
      
   void displayPostOrder() const
      {  displayPostOrder(root); }

   int numNodes()
   {  
      return nodeCount(root);
   }

   int numLeafNodes() const
   {
    return leafCount(root); 
   }

   int treeHeight() const 
   {
    return getHeight(root);
   }

   int treeWidth() const{
    int maxWidth = 0; 
    int height = getHeight(root);

    for(int level =1; level <- height; level++)
    {
        int currentWidth = getLevelWidth(root, level);
        if(currentWidth > maxWidth)
        {
            maxWidth = currentWidth; 
        }
    }
    return maxWidth; 
    
   }
};
#endif