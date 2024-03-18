//Write a program to accept marks of five subjects, calculate its total and average.

#include<stdio.h>
int main() 
{
    int arr[10] = {2,3,4,54,65,34,23,34,123,80};
    
    int sum=0, average;
    
    for(int i=0;i<10;i++)
	{
        sum += arr[i];
    }
    average = sum/10;
    printf("The average of given numbers : %d", average);

    return 0;
}
