// Implementation file for the MathStack class 
#include "MathStack.h" 
 
//************************************************ 
// Member function add. add pops                 * 
// the first two values off the stack and        * 
// adds them. The sum is pushed onto the stack.  * 
//************************************************ 
 
void MathStack::add() 
{ 
    int num, sum; 
 
    // Pop the first two values off the stack. 
    pop(sum); 
    pop(num); 
 
    // Add the two values, store in sum. 
    sum += num; 
  
    // Push sum back onto the stack. 
    push(sum); 
} 
 
//*********************************************** 
// Member function sub. sub pops the            * 
// first two values off the stack. The          * 
// second value is subtracted from the          * 
// first value. The difference is pushed        * 
// onto the stack.                              * 
//*********************************************** 
 
void MathStack::sub() 
{ 
     int num, diff; 
 
     // Pop the first two values off the stack. 
     pop(diff); 
     pop(num); 
 
     // Subtract num from diff. 
     diff -= num; 
 
    // Push diff back onto the stack. 
    push(diff); 
}

//*********************************************** 
// Member function mult. mult pops the            * 
// first two values off the stack. The          * 
// second value is multiplied by the          * 
// first value. The product is pushed        * 
// onto the stack.                              * 
//*********************************************** 
 
void MathStack::mult() 
{ 
     int num, prod; 
 
     // Pop the first two values off the stack. 
     pop(prod); 
     pop(num); 
 
     // Multiply num and prod. 
     prod *= num; 
 
    // Push prod back onto the stack. 
    push(prod); 
}

//*********************************************** 
// Member function div. div pops the            * 
// first two values off the stack. The          * 
// second value is divided by the          * 
// first value. The quotient is pushed        * 
// onto the stack.                              * 
//*********************************************** 
 
void MathStack::div() 
{ 
     int num, quot; 
 
     // Pop the first two values off the stack. 
     pop(quot); 
     pop(num); 
 
     // Divide quot by num. 
     quot /= num; 
 
    // Push quot back onto the stack. 
    push(quot); 
}

void MathStack::addAll() 
{ 
     int num, sum; 
     sum = 0; // Initialize sum to 0
 
    
     while (!isEmpty()) 
     { 
         pop(num); 
         sum += num; 
     }
     
     // Push sum back onto the stack. 
    push(sum); 
}

void MathStack::multAll() 
{ 
     int num, prod; 
     prod = 1; // Initialize product to 1
 
     
     while (!isEmpty()) 
     { 
         pop(num); 
         prod *= num; 
     }
     
     // Push prod back onto the stack. 
    push(prod); 
}