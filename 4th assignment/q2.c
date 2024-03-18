#include <stdio.h>  
#include <math.h>  
int main (void)  
{
    int base, exp;  
    int result; 
   
   printf(" ENTER THE BASE VALUE ");  
   scanf(" %d", &base);   
   
   printf(" ENTER THE POWER: ");  
   scanf (" %d", &exp); 
  

   result = pow ( base, exp);  
   printf (" %d to the power of %d is = %d ", base, exp, result);  
   
   return 0;  
}  



