//Write a program to print table of given number.

#include<stdio.h>
int main(void)
{
    int num, i; 
    printf (" ENTER A NUMBER: ");
    scanf (" %d", &num); 

    printf ("\n Table of %d", num);
  
    for ( i = 1; i <= 10; i++)
    {
        printf ("\n %d * %d = %d", num, i, (num*i));
    }
    return 0;
}
