
//Write a program to print table of given number.

#include<stdio.h>  
int main(void)  

{
   int n, i;
 
    printf("Enter a Number ");
    scanf("%d",&n);
    i=1;
    while(i<=10)
     {                
        printf("%d * %d = %d \n", n, i, n*i);
        ++i;
     }   
     
    return 0;  
}  
