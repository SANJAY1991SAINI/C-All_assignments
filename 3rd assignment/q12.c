//Write a program to find factorial of given number.

#include<stdio.h>
int main(void)
{
    int n, i;
    unsigned long long fact = 1;
    printf("ENTER A NUMBER: ");
    scanf("%d", &n);

    
    if (n < 0)
        printf("Error! Factorial of a negative number doesn't exist.");
    else
	{
        for (i = 1; i <= n; ++i)
		{
            fact *= i;
        }
        printf("Factorial of %d = %llu", n, fact);
    }

    return 0;
}

