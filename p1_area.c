// program to calculate area of rectangle
//  Area = length x breadth

#include <stdio.h>

int main()
{
    int len, height, area;
    printf("welcome to the area calculator\n");
    printf("---------------------\n");
    printf("Enter height of a rectangle_ ");
    scanf("%d", &len);
    printf("Enter width of a rectangle_ ");
    scanf("%d", &height);

    printf("Calculating area . . . . . \n");
    printf("The area of the rectangle with height %d and width %d is %d. \n", height, len, height * len);
    return 0;
}