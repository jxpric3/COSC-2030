// Specification file for the MathStack class 
#ifndef MATHSTACK_H 
#define MATHSTACK_H 
#include "DynIntStack.h" 
 
class MathStack : public DynIntStack 
{ 
public: 
     // MathStack operations 
     void add(); 
     void sub(); 
     void mult();
     void div();
     void multAll();
     void addAll();
}; 
#endif