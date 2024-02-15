#include <stdio.h>
int main()
{
    float celsius, fahrenheit;

    printf("The temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;

    printf("The temperature in Fahrenheit: %0.1f", fahrenheit);
    return 0;
}