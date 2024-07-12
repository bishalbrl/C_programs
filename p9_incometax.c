// income tax
/*Income Slab Tax
 2.5 – 5.0L 5%
 5.0L - 10.0L 20%
 Above 10.0L 30% */

#include <stdio.h>
int main()
{

    printf("Welcome to tax calculator\n");
    printf("--------\n");
    int income;
    printf("Enter your yearly income_");
    scanf("%d", &income);
    float tax = 0;
    if (income <= 250000)
    {
        tax = 0;
    }
    else if (income <= 500000)
    {
        tax = 0.05 * (income - 250000);
    }
    else if (income <= 1000000)
    {
        tax = 0.05 * (500000 - 250000) + 0.20 * (income - 500000);
    }
    else
    {
        tax = 0.05 * (500000 - 250000) + 0.20 * (1000000 - 500000) + 0.30 * (income - 1000000);
    }
    printf("your tax for income is %d is %.4f", income, tax);

    return 0;
}
