//Write a function to indicate whether given number is prime or not. Write another function to
//print prime numbers in the given range


#include<stdio.h>

int isPrime(int num);
void printPrimes(int lowerLimit, int upperLimit);



int main(void)
{
    int lowerLimit, upperLimit;

    printf("ENTER THE LOWER AND UPPER LIMITS: ");
    scanf("%d%d", &lowerLimit, &upperLimit);

   
    printPrimes(lowerLimit, upperLimit);

    return 0;
}

void printPrimes(int lowerLimit, int upperLimit)
{
    printf("All prime number between %d to %d are: ", lowerLimit, upperLimit);

    while(lowerLimit <= upperLimit)
    {
      
        if(isPrime(lowerLimit))
        {
            printf("%d, ", lowerLimit);
        }

        lowerLimit++;
    }

}	
int isPrime(int num)
{
    int i;

    for(i=2; i<=num/2; i++)
    {
       
        if(num % i == 0)
        {
            return 0;
        }
    }

    return 1;
}

