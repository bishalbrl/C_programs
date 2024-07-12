// program to check if the given year is leap year or not
#include <stdio.h>
int main()
{
    printf("welcome to the calculator\n");
    printf("---------------------\n");
    printf("Give the year you want to check_");
    int year;
    scanf("%d", &year);
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        printf("The year is leap year\n");
    }
    else
    {
        printf("The year is not a leap year.\n");
    }
    return 0;
}