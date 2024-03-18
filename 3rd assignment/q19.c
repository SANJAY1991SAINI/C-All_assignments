//Write a program to display First 5 prime numbers after a given number.
//Input: 7
//Output: 11 13 17 19 23

#include<stdio.h>

int main(void)
{
   
    int n,i = 3, count, c;

    printf("ENTER A NUMBER: ");
    scanf("%d", &n);

    if(n >= 1)
    {
        printf("\n\nFirst %d prime numbers are :  ", n);
        printf("2 ");
    }

   
    for(count = 2; count <= n; i++)
    {
       
        for(c = 2; c < i; c++)
        {
            if(i%c == 0)
                break;
        }

        if(c == i)  
        {
            printf("%d\n ", i);
            count++;    
        }

    }
   
    return 0;
}

