//Write a program to find factorial of given number.
//Input: 5
//Output: 1 * 2 * 3 * 4 * 5 = 120

#include<stdio.h>

int main(void)
{

    int x=1,fact=1,n;

    printf("ENTER A NUMBER: ");

    scanf("%d",&n);

    while(x<=n)
	{

        fact=fact*x;

        x++;

    }

    printf("Factorial of %d is: %d",n,fact);

    return 0;
}

