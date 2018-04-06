
 // What is the return value of the function foo
 //   when it is called as foo(345, 10) ?

 #include <stdio.h>

 int f(int j)
  {
    static int i = 50;
    int k;

    if (i == j)
     {
       printf("something");
       k = f(i);
       return 0;
     }
    else 
       return 0;
  }
 

 unsigned int foo(unsigned int n, unsigned int r) 
  {
    if (n  > 0) 
      return (n%r +  foo (n/r, r ));
    else 
      return 0;
  }

 int main()
  {
    printf( "%u" , foo( 345 , 10 ) );

    return (0);
  }
