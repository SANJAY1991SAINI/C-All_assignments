//Write a program to accept a number and print its prime factors.

#include<stdio.h>

int main(void)
{
     int i, j, num, isPrime;

  
    printf("ENTER A NUMBER: ");
    scanf("%d", &num);

    printf("All Prime Factors of %d are: \n", num);

    
    for(i=2; i<=num; i++)
    {
       
        if(num%i==0)
        {
            
            isPrime = 1;
            for(j=2; j<=i/2; j++)
            {
                if(i%j==0)
                {
                    isPrime = 0;
                    break;
                }
            }

          
            if(isPrime==1)
            {
                printf("%d, ", i);
            }
        }
    }

    return 0;
}



