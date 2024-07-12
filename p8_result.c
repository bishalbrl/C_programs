/*Write a program to determine whether a student has passed or failed. To pass, a
student requires a total of 40% and at least 33% in each subject. Assume there
are three subjects and take the marks as input from the user.*/

#include <stdio.h>
int main()
{
    printf("******MarkSheet*******\n");
    printf("---------------------\n");
    int m, s, e;
    float a;
    printf("Enter the marks of math_");
    scanf("%d", &m);
    printf("Enter the marks of science_");
    scanf("%d", &s);
    printf("Enter the marks of english_");
    scanf("%d", &e);
    a = (m + s + e) / 3;
    if (m < 33 || s < 33 || e < 33)
    {
        printf("you are failed on individual subject");
    }
    else if (a < 40)
    {
        printf("you still failed because your total is less than required");
    }
    else
    {
        printf("hurray! you passed");
    }
    return 0;
}