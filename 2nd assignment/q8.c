// Write a program that will calculate the price for a quantity entered from the keyboard, given
// that the unit price is Rs 5 and there is a discount of 10 percent for quantities over 30 and a 15
// percent discount for quantities over 50.

#include<stdio.h>

int main(void)

{
       const int level1 = 30;              
       const int level2 = 50;             
       const double discount1 = 0.10;       
       const double discount2 = 0.15;      
       const double unit_price = 5.0;       
       int quantity = 0;
       int total = 0;            
       int a1 = 0;                  
       int a2 = 0;                  

       printf("ENTER THE QUANTITIES: ");
       scanf("%d",&quantity);

       if (quantity > 50)                     
       {
           total = level1;
           a1 = level2 - level1;
           a2 = quantity - level2;
       }
       else if (quantity > 30)              
       {
           total = level1;
           a1 = quantity - level1;
       }
       else
           total = quantity;

           printf("The total price %d items is $%.2lf\n", quantity,unit_price*(total + (1.0 - discount1)*a1 + (1.0 - discount2)*a2));

                                                                     
      return 0;
}	  
