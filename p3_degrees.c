// program to covert celcius to fahrenheit
// formula Fahrenheit = (Celsius * 9/5) + 32
#include <stdio.h>
int main()
{
    printf("welcome to the  celcius to fahrenheit converter\n");
    printf("---------------------\n");
    float temp, fahren;
    printf("Give the celcius degree_");
    scanf("%f", &temp);
    fahren = (temp * 9 / 5) + 32;
    printf("Temperature %.1f deggree celcius will be %.1f fahrenheit", temp, fahren);

    return 0;
}