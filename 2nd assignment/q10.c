/* Write a program to accept a character c and display category of the input character.
   ALPHABET: c is a letter (65 to 90 or 97 to 122)
   UPPERCASE: c is an uppercase letter (65 to 90)
   LOWERCASE : c is a lowercase letter (97 to 122)
   DIGIT: c is a digit (48 to 57)
   SPACE: c is a space(32), tab(9), carriage return(13), new line(10)
   OTHER: Not listed above  */

#include<stdio.h>

int main(void)

{

    char c;
    printf("ENTER A CHARACTER ");
    scanf("%c", &c);


    if (c >= 'A' && c <= 'Z')
        printf("UpperCase character\n",c);
 
    else if (c >= 'a' && c <= 'z')
        printf("LowerCase character\n",c);

   else if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
   
        printf("'%c' is alphabet.\n", c);
    
    else if(c >= '0' && c <= '9')
    
        printf("'%c' is digit.\n", c);
    
    else
    
        printf("'%c' is special character.\n", c);
    


    return 0;

}


