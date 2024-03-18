// Write a program to accept two numbers and display division of the two numbers. Check for
// divide by zero error. If divider is zero then display appropriate error message.

#include<stdio.h>
int main(void)

{
  float num1,num2,res;

  printf("ENTER TWO NO.:");
  scanf("%f %f",&num1,&num2);

  if(num2!=0)

  printf("division of two no = %f\n",res=num1/num2);

  else
  printf("divide by zreo error");



  return 0;
}
