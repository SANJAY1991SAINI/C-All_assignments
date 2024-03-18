//Write a function to calculate GCD of given numbers using recursion.

#include <stdio.h>

int hcf(int n1, int n2);
int main(void) 
{
    int n1, n2;
    printf("ENTER TWO NUMBER: ");
    scanf("%d %d", &n1, &n2);
    printf("G.C.D of %d and %d is %d.", n1, n2, hcf(n1, n2));
    return 0;
}

int hcf(int n1, int n2) 
{
    if (n2 != 0)
        return hcf(n2, n1 % n2);
    else
        return n1;
}

