#include<stdio.h>

typedef enum operation {EXIT, SUM_Digit, REV , PALIN , ARM }opr;

int main(void)
{
 
   int num,sum = 0, rem;
  
   printf("ENTER THE NUMBER : ");
   scanf("%d",&num);
 
 
    
  
    while (num != 0)
    {
        rem = num % 10;
        sum = sum + rem;
        num = num / 10;
    }
    printf("Sum of digits of the number is %d\n
	", sum);
    return 0;
}	
