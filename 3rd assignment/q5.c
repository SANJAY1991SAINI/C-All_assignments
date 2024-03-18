/*Check whether given number is numeric palindrome or not
Input: 9362
Output: 9362 is not a numeric palindrome
Input: 36963
Output: 36963 is a numeric palindrome    */

#include<stdio.h>
int main(void)
{
    int n, reversed = 0, remainder, original;
    printf("ENTER THE NUMBER: ");
    scanf("%d", &n);
    original = n;

    
    while (n != 0)
	{
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }

   
    if (original == reversed)
        printf("%d is a palindrome.", original);
    else
        printf("%d is not a palindrome.", original);

    return 0;
}
