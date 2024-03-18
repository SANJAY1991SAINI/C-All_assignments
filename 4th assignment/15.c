//Write a function to print a given number in hexadecimal format.


#include<stdio.h>
int main(int argc, char *argv[])
{
    unsigned int i;
    printf("decimal  hexadecimal\n");
    for (i = 0; i <= 256; i+=16)
        printf("%04d     0x%04X\n", i, i);
    return 0;

}	


