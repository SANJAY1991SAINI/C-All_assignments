//Write a program to accept three integer numbers and find its average.

#include<stdio.h>

int main()

{
  int num1,num2,num3;
  printf("ENTER 1ST INTEGER NUMBER: ");
  scanf("%d",&num1 );

  printf("ENTER 2ND INTEGER NUMBER: ");
  scanf("%d",&num2 );

  printf("ENTER 3RD INTEGER NUMBER: ");
  scanf("%d",&num3 );

  int avg =( num1+num2+num3)/3 ;

  printf("AVERAGE=%d\n",avg);
 


 return 0;
}

