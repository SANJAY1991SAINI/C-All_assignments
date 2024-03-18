//Write a program to display n terms of Fibonacci series

#include<stdio.h>
int main(void)
{

  int i, n;

  
  int t1 = 0, t2 = 1;


  int nextTerm = t1 + t2;

 
  printf("ENTER A NUMBER: ");
  scanf("%d", &n);

  
  printf("Fibonacci Series: %d, %d, ", t1, t2);

  
  for (i = 3; i <= n; ++i)
  {
    printf("%d, ", nextTerm);
    t1 = t2;
    t2 = nextTerm;
    nextTerm = t1 + t2;
  }
  return 0;

}  
