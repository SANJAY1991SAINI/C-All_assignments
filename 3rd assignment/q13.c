//Write a program to accept integer values of base and index and calculate power of base to
//index.

#include<stdio.h>

int main(void)
{
    int base, exponent;
    float power = 1;
    int i;

  
    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &exponent);
    int expo = exponent;

    
    for(i=expo;i<0;i++)
    {
        power = power/base;
    }

    
    for(i=expo;i>0;i--)
    {
        power = power * base;
    }
    printf("%d ^ %d = %f", base, exponent, power);

    return 0;
}

