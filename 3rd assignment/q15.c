//Write a program to accept a number and check whether it is Prime no.

#include<stdio.h>

int main(void)

{

    int i, num, temp = 0;

    

    printf("ENTER A NUMBER: ");

    scanf("%d", &num);

    

    for (i = 2; i <= num / 2; i++)

    {

       

        if (num % i == 0)

        {

            temp++;

            break;

        }

    }

    

    if (temp == 0 && num != 1)

    {

        printf("%d is a Prime number", num);

    }

    else

    {

        printf("%d is not a Prime number", num);

    }

    return 0;
}
