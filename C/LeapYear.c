#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                printf("leap year");
            }
            else
                printf("Not a Leap year");
        }
        else
            printf("Leap Year");
    }
    else
        printf("Not a Leap year");

    return 0;
}