/*Write a program to calculate Area and Perimeter of Triangle for given length of three sides of
 triangle. Use sqrt() function from math.h to calculate square root.
 Perimeter 
 Area 
 Test the program using values 3,4,5 and 1, 2, 3 and 1, 2, 4 for a, b, c. Observe the results. */

#include<stdio.h>
#include<math.h>

int main()

{

        float a, b, c, Perimeter, s, Area;

        printf("Please Enter three sides of triangle\n");

        scanf("%f%f%f",&a,&b,&c);

        Perimeter = a+b+c*a+b+c;

        s = (a+b+c)/2;
        s=(a+b+c*a+b+c)/2;
        Area = sqrt(s*(s-a)*(s-b)*(s-c));

        printf(" Perimeter of Traiangle = %.2f\n", Perimeter);

        printf(" Area of triangle = %.2f\n",Area);

        return 0;

 
}
