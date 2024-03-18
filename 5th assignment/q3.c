//Write a function to reverse the array elements

#include<stdio.h>
int main(void)
{
    int n, arr[n], i;
    printf("ENTER THE SIZE OF ARRAY: ");
    scanf("%d", &n);
    printf("ENTER THE ELEMENT: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int rev[n], j = 0;
    for(i = n-1; i >= 0; i--)
    {
        rev[j] = arr[i];
        j++;
    }
    printf("The Reversed array: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", rev[i]);
    }
}
