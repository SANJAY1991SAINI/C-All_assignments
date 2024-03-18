
#include<stdio.h>
 
int main(void)

{
    int i, sum, num, count = 0;
    printf("All Armstrong number between 1 and 500 are:\n");
 
  
    for (i = 1; i <= 500; i++)
	{
        num = i;
       
        while (num != 0)
		{
            num /= 10;
            count++;
        }
        num = i;
        sum = pow(num % 10, count)
              + pow((num % 100 - num % 10) / 10, count)
              + pow((num % 500 - num % 100) / 100, count);
       
        if (sum == i) {
            printf("%d ", i);
        }
        count = 0;
    }
	return 0;
}
