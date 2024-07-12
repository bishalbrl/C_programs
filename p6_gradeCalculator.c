// program to calculate the grade of the user input score
/*90 – 100 => A
80 – 90 => B
70 – 80 => C
60 – 70 => D
50 – 60 => E
<50 => F*/
#include <stdio.h>
int main()
{
    printf("welcome to the  calculator\n");
    printf("---------------------\n");
    printf("Enter your marks_");
    int mark;
    scanf("%d", &mark);
    if (mark <= 100 && mark >= 90)
    {
        printf("A");
    }
    else if (mark < 90 && mark >= 80)
    {
        printf("B");
    }
    else if (mark < 80 && mark >= 70)
    {
        printf("C");
    }
    else if (mark < 70 && mark >= 60)
    {
        printf("D");
    }
    else if (mark < 60 && mark >= 50)
    {
        printf("E");
    }
    else if (mark < 50)
    {
        printf("F");
    }
    return 0;
}
