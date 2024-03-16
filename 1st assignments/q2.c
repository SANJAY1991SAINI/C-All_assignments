//Write a program to accept a number and print the number in character, decimal, octal and hexa formats

#include<stdio.h>

int main(void)

{ 
   int num;
   
   printf("Enter a number: ");
   scanf("%d",&num );

  //print in integer
  printf("number = %d\n ",num );

  //print in char
  printf("character = %c\n ",num );
 
 //print in octal
  printf("octal number = %o\n ",num );
 
 //print in integer
  printf("hexa number =% x\n ",num );
 
 return 0;
}
