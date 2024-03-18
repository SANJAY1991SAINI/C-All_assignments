//Write a program to accept a 5 digit number and check whether it is a numeric palindrome. (If
//reversed number is same as entered number it is called palindrome).

#include<stdio.h>
int main(void)
{
  
  int num, reversed = 0, remainder, original;
  
    printf("ENTER A NUMBER:");
    scanf("%d", &num);
    original = num;

    while (num != 0) 
	{
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    if (original == reversed)
        printf("%d is a palindrome.\n", original);
    else
        printf("%d is not a palindrome.\n", original);

    return 0;
}

