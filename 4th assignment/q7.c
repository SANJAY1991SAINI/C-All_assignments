//Write a function to return next term of Fibonacci series with each call to the function.

#include <stdio.h>

int fibonacci(int n) 
{
   if(n == 0)
      return 0;
   else if(n == 1)
      return 1;
   else
      return (fibonacci(n-1) + fibonacci(n-2));
}

int main() 
{
   int n;

   printf("ENTER NUMBER OF TERM\n");
   scanf("%d", &n);

   printf("Fibonacci Series: ");

   for (int i = 0; i < n; i++) {
      printf("%d ", fibonacci(i));
   }

   return 0;
}
