#include<stdio.h>
int main()
{
   int num, f = 0, sec = 1, nx, a;
   printf("Enter the number of terms\n");
   scanf("%d",&num);
   printf("First %d terms of Fibonacci series are :-\n",num);
 
   for ( a = 0 ; a < num ; a++ )
   {
      if ( a <= 1 )
         nx = a;
      else
      {
         nx = f + sec;
         f = sec;
         sec = nx;
      }
      printf("%d\n",nx);
   }
   return 0;
}
