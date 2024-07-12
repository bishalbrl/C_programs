// program to check if the given character is capital letter or small letter

#include <stdio.h>
int main()
{
    printf("welcome to the calculator\n");
    printf("---------------------\n");

    char ch;
    printf("give a character to check_ ");
    scanf(" %c", &ch);

    if (ch >= 'A' && ch <= 'Z')
    {
        printf("The given character is capital letter\n");
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("The given character is small letter\n");
    }
    else
    {
        printf("The given character must be special character.\n");
    }
}