/* 1. Write a program to Accept two numbers and
a. find its sum.
b. find its difference.
c. find its product.
Test the program using different integral data type signed/unsigned char/int/long.
First test the result using small values. Then test the same program using large values.
Observe the results.*/

#include<stdio.h>

int main()

{ 
   int num1,num2;
   char ch1,ch2;

//sign value  
   printf("ENTER TWO NUMBER:");
   scanf("%d %d",&num1,&num2);

   printf("sum of two number= %d\n",num1+num2);

   printf("difference of two number= %d\n",num1-num2);
   printf("product of two number= %d\n",num1*num2);

//unsigne value
 printf("ENTER TWO NUMBER:");
     scanf("%u %u",&num1,&num2);



     printf("sum of two number= %u\n",num1+num2);
    
     printf("difference of two number= %u\n", num1 - num2 );
     printf("product of two number= %u\n",num1*num2);
//char

     
     printf("ENTER TWO character:");
     scanf("%*c%c %c",&ch1,&ch2);



     printf("sum of two char= %c\n",ch1+ch2);
 
     printf("difference of two char= %c\n",ch1-ch2);
     printf("product of two char= %c\n",ch1*ch2);




//long int

      
      printf("ENTER TWO long integer:");
      scanf("%ld %ld",&num1,&num2);



      printf("sum of two long integer= %ld\n",num1+num2);
 
      printf("difference of two long integer= %ld\n",num1-num2);
      printf("product of two long integer= %ld\n",num1*num2);
      printf("\n");
     
return 0;
}
