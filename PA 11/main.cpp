#include "MathStack.h"
#include <iostream> 
using namespace std; 

int main() 
{ 
    MathStack stack; 
    int num; 
 
    // Push 10, 20, 30 and 40 onto the stack. 
    cout << "Pushing 10, 20, 30, and 40 onto the stack..." << endl;
    stack.push(10); 
    stack.push(20); 
    stack.push(30); 
    stack.push(40);
    
    // Call the addAll member function.
    cout << "Calling addAll()..." << endl;
    stack.addAll();
    cout << "The sum of all values in the stack is: ";
    stack.pop(num);
    cout << num << endl;

    // Push 10, 20, 30 and 40 onto the stack.

    cout << "Pushing 10, 20, 30, and 40 onto the stack..." << endl;
    stack.push(10);
    stack.push(20);
    stack.push(30);
    stack.push(40);

    // Call the multAll member function.
    cout << "Calling multAll()..." << endl;
    stack.multAll();
    cout << "The product of all values in the stack is: ";
    stack.pop(num);
    cout << num << endl;
    
    
 
    return 0; 
}
