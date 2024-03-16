//Write a program to accept an integer value and print its table.

#include<stdio.h>

int main(void)

{
  int num;
  printf("ENTER AN INTEGER VALUE: ");
  scanf("%d",&num);
 
  int res = 0;   
  for(int i = 1; i<=10; i++)
     
   printf("TABLE = %d\n",res+=num);

  return 0;
}
