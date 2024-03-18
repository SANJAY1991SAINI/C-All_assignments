/*Write a priogram to convert temperature in Celsius to Fahrenheit and vice versa. Formula for
  conversion is  

     celsius = 5/9 * (fahrenheit-32)
*/
#include<stdio.h>


int main(void)
{
    float celsius,fahrenheit;
  

    printf(" Enter the Temparature in Celsius : ");
    scanf("%f",&celsius);

    fahrenheit = (1.8 * celsius) + 32;
    printf(" Temperature in Fahrenheit : %f\n ",fahrenheit);

    printf(" Enter the Temparature in Fahrenheit : ");
    scanf("%f",&fahrenheit);

    celsius = (0.555 * (fahrenheit - 32));
    printf(" Temperature in Celsius : %f\n ",celsius);
    return 0;

}	
