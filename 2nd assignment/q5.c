// Write a program to find maximum of three numbers using
// a. If – else
// b. conditional operator.

#include<stdio.h>
  
 int main(void)
 {
      int num1,num2,num3,max;
      printf("ENTER THREE NUMBER:");
      scanf("%d %d %d",&num1,&num2,&num3);

      if(num1>num2 && num1>num3)
      max = num1;
    
	  else if(num2>num3)
      max = num2;
      else
      max = num3;
   
      printf("Largest number is: %d\n",max); 

      return 0;
  }

