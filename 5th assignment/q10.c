//Write a function to search the given number into the array using linear search and return the
//address of the element. If element is not found it should return NULL.

#include <stdio.h>

int linear_search_function(int a[], int n, int key) 
{

   for (long i = 0 ;i < n ; i++ ) 
   {

      if (a[i] == key)

         return i;

   }

   return -1;

}

int main()

{

  int arr[100], key, k, n, key_position;

  printf("ENTER NUMBER OF ELEMENT \n");

  scanf("%d", &n);

  printf("Enter %d integer(s)\n", n);

  for (k= 0; k < n; k++)

    scanf("%d", &arr[k]);

  printf("Enter a number you would like to search in the array\n");

  scanf("%d", &key);

  key_position = linear_search_function(arr, n, key);

   if (key_position == -1)

      printf("%d isn't present in the array.\n", key);

   else

      printf("%d is present at location %d.\n", key, key_position+1);

   return 0;

}


