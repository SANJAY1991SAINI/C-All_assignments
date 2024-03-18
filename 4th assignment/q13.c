//Write a function to calculate nth term of the Fibonacci series using recursion. Write another
//function to print given number of terms of Fibonacci series.


#include<stdio.h>


unsigned long long fibo(int num);


int main(void)
{
    int num;
    unsigned long long fibonacci;

    
    printf("ENTER A NUMBER: ");
    scanf("%d", &num);

    fibonacci = fibo(num);

    printf("%d fibonacci term is %llu", num, fibonacci);

    return 0;
}

unsigned long long fibo(int num)
{
    if(num == 0)      
        return 0;
    else if(num == 1) 
        return 1;
    else
        return fibo(num-1) + fibo(num-2);
}

