// What is a function call

// Declaration , Definition

// Declare your belongings before security check !

// Signature , sign 

// Should variable names be same ?

// Pass by value , pass be reference

// There is good debate

// Its interpretation !


// Information , control flow 

// What happens when function is called ?

// Stack , return address

#include <stdio.h>

// An example function that takes two parameters 'x' and 'y'
// as input and returns max of two input numbers
int max(int x, int y)
{
    if (x > y)
      return x;
    else
      return y;
}
 
// main function that doesn't receive any parameter and
// returns integer.
int main(void)
{
    int a = 10, b = 20;
 
    // Calling above function to find max of 'a' and 'b'
    int m = max(a, b);
 
    printf("\n m is %d \n", m);
    return 0;
}
