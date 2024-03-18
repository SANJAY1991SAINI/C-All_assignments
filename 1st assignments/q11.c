/*Write a program to determine the ranges of char, short, int, and long variables, both signed and
 unsigned, by printing appropriate values from standard headers.
 Do not use spaces to align table columns.
 (note: the size and range changes from compiler to compiler)
 ______________________________________________________________________
 Data Type
 Size
 Format Specifier
 Range
 _ _____________________________________________________________________  */
#include<stdio.h>
#include<limits.h>

int main(void)
{
     printf("..........................................................................\n");
	 printf("data type format specifier size range/n");

     printf("\n");	
	 printf("char,       %%c             %c     %d to %d\n ",sizeof(char), SCHAR_MIN,SCHAR_MAX);
     
	 printf("long int,   %%ld            %ld    %d to %d\n ",sizeof(long int), INT_MIN,INT_MAX);

	 printf("unsigned int,%%u            %u     0 to %u\n ",sizeof(unsigned int), UINT_MAX);

	 printf("signed char, %%c            %c     %d to %d\n ",sizeof(signed char), SCHAR_MIN,SCHAR_MAX);

	 printf("unsigned char,%%c           %c     0 to %d\n ",sizeof(unsigned char), UCHAR_MAX);

	 printf("signed short int,%%d        %d     %d to %d\n ",sizeof(signed short int), SHRT_MIN,SHRT_MAX);

	 printf("unsigned short int %%d      %d     0 to %d\n ",sizeof(unsigned short int), USHRT_MAX);

     printf("signed long int,%%ld        %ld    %ld to %ld\n ",sizeof(signed long int), LONG_MIN,LONG_MAX);
	
	
     printf("...............................................................................\n");

     return 0;
}

