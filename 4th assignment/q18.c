//Write a function to implement four function calculator. The return value indicates the error (due
//to zero denominator in case of division). The result is returned via out-parameter.

#include<stdio.h>

int add(int, int);
int sub(int, int);
int mul(int, int);
int div(int, int);

int main(void)
{
     int num1, num2, choice;

     printf("[0] Exit\v[1] Add\v[2] Subtract\v[3] Multiply\v[4] Divide");
     scanf("%d", &choice);

    switch(choice)
	{
    case 0:
        return 0;
        break;
    case 1:
        printf("Enter 1st number:\n");
        scanf("%d", &num1);
        printf("Enter 2nd number:\n");
        scanf("%d", &num2);
        printf("%d", add(num1,num2));
        break;
    case 2:
        printf("Enter 1st number:\n");
        scanf("%d", &num1);
        printf("Enter 2nd number:\n");
        scanf("%d", &num2);
        printf("%d ", sub(num1,num2));
        break;
    case 3:
        printf("Enter 1st number:\n");
        scanf("%d", &num1);
        printf("Enter 2nd number:\n");
        scanf("%d", &num2);
        printf("%d", mul(num1,num2));
        break;
    case 4:
        printf("Enter 1st number:\n");
        scanf("%d", &num1);
        printf("Enter 2nd number:\n");
        scanf("%d", &num2);
        printf("%d", div(num1,num2));
        break;
    default:
        printf("That is not a valid choice.");
        break;
        }
   
        int add(int x,int y){
        int z = x + y;
         return z;
        }

        int sub(int a,int b){
        int c = a - b;
         return  c;
        }

        int mul(int d,int e){
        int f = d * e;
        return f;
         }

         int div(int g,int h){
         int i = g / h;
         return i;
}
}
