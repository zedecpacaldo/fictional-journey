#include <stdio.h>
#include <stdlib.h>

int main()
{
    double f, c;

    printf("Enter the temperature in Fahrenheit: ");
    scanf("%lf", &f);

    c = ((f - 32) * 5) / 9;

    printf("Fahrenheit Temperature is: %.2f.", f);
    printf("\nCelsius Temperature is: %.2f.", c);
    return 0
}
