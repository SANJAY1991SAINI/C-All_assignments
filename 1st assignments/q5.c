//Write a program to display ASCII values for character constants ‘\n’, ‘\r’, ‘\t’, ‘\a’, ‘\b’.

#include<stdio.h>

int main()

{
   int num;
   char ch;
   printf("ENTER THE CHARACTER CONSTANTS:" );
   scanf("%c",&ch );

   printf("ASCII value for character constant = %d",ch);

   return 0;
}
