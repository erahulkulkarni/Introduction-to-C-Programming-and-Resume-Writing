
#include <stdio.h>
int main()
{
  int x = 10, y = 5;

  printf("\n Before Swapping: x = %d, y = %d", x, y);

  // Using Arithmetic Operators

  // Two friends A and B 
 
  // Code to swap 'x' and 'y'
  x = x + y;  // x now becomes 15
  y = x - y;  // y becomes 10
  x = x - y;  // x becomes 5
 
  printf("\n After Swapping: x = %d, y = %d\n", x, y);

  // Why does it work ?
 
  return 0;
}
