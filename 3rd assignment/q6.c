#include <stdio.h>
int main(void)
{
    int num, originalNum, remainder, result = 0;
    printf("ENTER THE THREE DIGIT NUMBER: ");
    scanf("%d", &num);
    originalNum = num;

    while (originalNum != 0)
	{
       
        remainder = originalNum % 10;
        
       result += remainder * remainder * remainder;
        
      
       originalNum /= 10;
    }

    if (result == num)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);

    return 0;
}
