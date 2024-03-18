// Write a program to accept number and check whether the number is +ve, -ve and zero.

#include<stdio.h>
int main(void)
{

  int num;

  printf("ENTER THE NUMBER :");
  scanf("%d",&num);

  if(num > 0)
  printf("NUMBER IS +VE\n");

  else if(num == 0)
    printf("NUMBER IS ZERO\n");
 
  else
    printf("NUMBER IS -VE\n");
 






   return 0;
}
