#include <stdio.h>

// What is function call

// Does the variable name matter , should they be same ?
void fun(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
}
 
// This function swaps values pointed by xp and yp
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
 
int main()
{
    int x = 10, y = 20;

    printf("\nBefore fun call : x = %d, y = %d", x, y);

    fun( x, y);

    printf("\nAfter fun call : x = %d, y = %d", x, y);        

    swap(&x, &y);

    printf("\nAfter swap call: x = %d, y = %d\n", x, y);

    return 0;
}
