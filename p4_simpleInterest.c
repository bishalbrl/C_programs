// program to calculate simple interest
//  Simple Interest (SI) = Principal (P) x Rate of Interest (R) x Time Period (T) / 100
#include <stdio.h>
int main()
{
    printf("welcome to the simple interest calculator\n");
    printf("---------------------\n");

    int p, r, t, i;
    printf("Enter principal amount_");
    scanf("%i", &p);
    printf("Enter rate for the principal per years_");
    scanf("%i", &r);
    printf("Enter the time period_");
    scanf("%i", &t);
    i = (p * r * t) / 100;
    printf("The simple interest is %i", i);
    return 0;
}