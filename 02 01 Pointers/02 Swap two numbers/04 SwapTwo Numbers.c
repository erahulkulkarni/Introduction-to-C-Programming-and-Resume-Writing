
#include <stdio.h>
int main()
{
  int x = 10, y = 5;

  printf("\n\n Before Swapping: x = %d, y = %d", x, y);
 
  // Code to swap 'x' and 'y'
  x = x * y;  // x now becomes 50
  y = x / y;  // y becomes 10
  x = x / y;  // x becomes 5
 
  printf("\n After Swapping: x = %d, y = %d\n", x, y);
 
  return 0;
}
