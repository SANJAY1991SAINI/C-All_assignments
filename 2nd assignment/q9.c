// Write a program to display number of days in the given month and year using
// a. Using If else ladder.
// b. Using logical operators.

#include<stdio.h>

int main(void)

{
     int n;
	 printf("ENTER THE MONTH B/W 1 TO 12:");
	 scanf("%d",&n);
	 
	 if(n== 1||n== 3||n== 5|| n== 7|| n== 8 ||n==10 ||n==12)
	  

	   	printf("no of days is 31\n");
     	
	 else if(n== 4||n== 6||n== 9|| n== 11)
	
	    printf("no of days in 30\n");
	 else
	    printf("no of days is 29 or 28\n");

	return 0;	
}

