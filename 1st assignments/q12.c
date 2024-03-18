/*Extend above program (11) to print ranges for float, double, and long double. Use <float.h>.
“float” numbers can be printed using %f, %g, %e, %E.. */

#include<stdio.h>
#include<float.h>

int main()

{
       printf("..........................................................................\n");
       printf("data type format specifier size range/n");
 
       printf("\n");
       printf("float,       %%f            %luB     %e to %e\n ",sizeof(float), FLT_TRUE_MIN, FLT_MAX);
  
       printf("double,     %%lf            %luB    %le to %le\n ",sizeof(double), DBL_TRUE_MIN, DBL_MAX);
  
       printf("long double ,%%lu           %luB     %Le to %Le\n ",sizeof(long double), LDBL_TRUE_MIN, LDBL_MAX);
  
      
  
       
  

       printf("..........................................................................\n");
       


     return 0;
}  


/*
 
 printf(“char %luB %d to %d \n”, sizeof(char), CHAR_MIN, CHAR_MAX); // %c for printing the character
 printf(“signed char %luB %hhi to %hhi \n”, sizeof(signed char), SCHAR_MIN, SCHAR_MAX);
 printf(“unsigned char %luB %hhu to %hhu \n\n”, sizeof(unsigned char), 0, UCHAR_MAX);LDBL_TRUE_MIN, LDBL_MAX


 printf(“short int %luB %hi to %hi \n”, sizeof(short int), SHRT_MIN, SHRT_MAX);
 printf(“unsigned short int %luB %hu to %hu \n”, sizeof(unsigned short int), 0, USHRT_MAX);
 printf(“int %luB %d to %d \n”, sizeof(int), INT_MIN, INT_MAX); // %d or %i
 printf(“unsigned int %luB %u to %u \n\n”, sizeof(unsigned int), 0, UINT_MAX);


 printf(“long %luB %ld to %ld \n”, sizeof(long), LONG_MIN, LONG_MAX); // %ld or %li
 printf(“unsigned long %luB %d to %lu \n”, sizeof(unsigned long), 0, ULONG_MAX); // 0 is int
 printf(“long long %luB %lld to %lld \n”, sizeof(long int), LLONG_MIN, LLONG_MAX);
 printf(“unsigned long long %luB %d to %llu \n\n”, sizeof(unsigned long long), 0, ULLONG_MAX); // 0 is int

 printf(“float %luB %e to %e \n”, sizeof(float), FLT_TRUE_MIN, FLT_MAX);
 printf(“double %luB %le to %le \n”, sizeof(double), DBL_TRUE_MIN, DBL_MAX);
 printf(“long double %luB %Le to %Le \n\n”, sizeof(long double), LDBL_TRUE_MIN, LDBL_MAX);
*/


