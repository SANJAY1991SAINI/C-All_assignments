//Write a function to print a given number in binary format

#include<stdio.h>

void bin(int);
int main(void)
{
    int num;
    printf("ENTER A NUMBER: ");
    scanf("%d", &num);
    printf("Binary representation of %d is:\n", num);
    bin(num);
    return 0;
}
void bin(int num) 
{
    int i;
    for (i = 31; i >= 0; i--) 
	{
        if (num & (1 << i))
            printf("1");
        else
            printf("0");
    }
    printf("\n");
}

