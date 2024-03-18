//Write function to check whether given year is leap or not. Write another function to print
//number of days in given month


#include<stdio.h>

int isLeapYear(int year)
{

    if (year % 4 == 0)

    {

        if (year % 100 == 0)

        {

            if (year % 400 == 0)

            {

                return 1;

            }

            else

            {

                return 0;

            }

        }

        else

        {

            return 1;

        }

    }

    else

    {

        return 0;

    }

}

int main(void)

{
    int year;

    printf("Enter a year: ");

    scanf("%d", &year);

    if (isLeapYear(year))

    {

        printf("%d is a leap year.\n", year);

    }

    else

    {

        printf("%d is not a leap year.\n", year);

    }

    return 0;

}

