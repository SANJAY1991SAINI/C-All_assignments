//Write a function to remove duplicate elements from the array. After processing the array should
//store only the unique elements consecutively. Also function should return the number of unique
//elements into the array

#include<stdio.h>

int main (void)
{
    
    int arr[20], i, j, k, size;

    printf ("ENTER NUMBER OF ARRAY: ");
    scanf (" %d", &size);

    printf (" ENTER %d ELEMENT OF ARRAY: \n ", size);
   
    for ( i = 0; i < size; i++)
    {
        scanf (" %d", &arr[i]);
    }


    
    for ( i = 0; i < size; i ++)
    {
        for ( j = i + 1; j < size; j++)
        {
           
            if ( arr[i] == arr[j])
            {
                
                for ( k = j; k < size - 1; k++)
                {
                    arr[k] = arr [k + 1];
                }
              
                size--;

         
                j--;
            }
        }
    }


   
    printf (" \n Array elements after deletion of the duplicate elements: ");

   
    for ( i = 0; i < size; i++)
    {
        printf (" %d \t", arr[i]);
    }
    return 0;
}
