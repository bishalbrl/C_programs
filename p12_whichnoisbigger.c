// finding the greatest no of the given 4 no
#include <stdio.h>
int main()
{
    printf("which no is greater than other. enter 4 numbers\n");
    printf("---------------------\n");

    int a, b, c, d;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    if (a > b && a > c && a > d)
    {
        printf("%i is greater than other", a);
    }
    else if (b > a && b > c && b > d)
    {
        printf("%i is greater than other", b);
    }
    else if (c > a && c > b && c > d)
    {
        printf("%i is greater than other", c);
    }
    else if (d > a && d > b && d > c)
    {
        printf("%i is greater than other", d);
    }
    return 0;
}