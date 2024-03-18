//Write a function to accept array elements from the user. Write another function to print array
//elements. Re-use these functions in rest of the assignments wherever required.

#include<stdio.h>
#include<stdlib.h>

void getArray(int);
void displayArray(int);
int main(void) 
{
    int limit;
    printf("ENTER THE SIZE OF ARRAY :");
    scanf("%d",&limit);
    getArray(limit);
    displayArray(limit);
    return EXIT_SUCCESS;
}

void getArray(int limit)
{
    int i,a[100];
    printf("ENTER THE VALUE OF ARRAY :\n");
    for(i=0;i<limit;i++){
        scanf("%d",&a[i]);
    }
}

void displayArray(int limit)
{
    int i,b[100];
    printf("Your Array is :\n");
    for(i=0;i<limit;i++){
        printf(" %d\t",b[i]);
    }
    printf("\n");
}

