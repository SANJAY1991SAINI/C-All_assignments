//Print the ASCII value of user entered character in decimal, hex, octal format and also print the
//character for user entered ASCII value.

#include<stdio.h>

int main(void)

{
  char ch;
  int num;
  printf("ENTER THE CHARACTER:");
  scanf("%c",&ch);

  //print in decimal

  printf("ASCII value of character = %d\n ",ch );
 
  // print in octal
  printf("Octal value of character = %o\n ",ch );

  //print in hex
  printf("HEX value of character = %x\n ",ch );

  printf("...........................\n");
  // ASCII to character
  printf("Print the ASCII value:" );
  scanf("%d",&num);
  printf("character = %c\n",num);


 return 0;
}
