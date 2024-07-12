// program to calculate the area of circle and volume of circle
//  formula A = πr^2
#include <stdio.h>

int main()
{
    float radius, area, height;
    printf("welcome to the circle area and volume calculator\n");
    printf("---------------------\n");

    printf("Enter the radius of the circle?_");
    scanf("%f", &radius);
    printf("calculating area....\n");
    area = 3.14159 * radius * radius;
    printf("The area of circle with radius %f is %f.", radius, area);
    printf("\n\n for volume give height of cylinder_ ");
    scanf("%f", &height);
    // using .1 to float format specifiers will give only one float point of the number and so on if we increase the value.
    printf("The volume of the cylinder with radiuse %.1f and height %.1f is %.1f.", radius, height, area * height);

    return 0;
}
