#include <stdio.h>
#include <stdlib.h>

int main()
{
    double tValue_1, tValue_2;
    int temperature_1, temperature_2;

    printf("Which temperature unit do you want to convert?");
    printf("\n[1] Celsius\n[2] Fahrenheit\n[3] Kelvin\n");
    printf("\nChoice: ");
    scanf("%d", &temperature_1);


    switch(temperature_1){
        case 1:
            printf("\nTo which unit do you want to convert Celsius to? ");
            printf("\n[1] Fahrenheit\n[2] Kelvin\n");
            printf("\nChoice: ");
            scanf("%d", &temperature_2);

            switch(temperature_2){
            case 1: /* Celsius to Fahrenheit */
                printf("\nPlease enter the Celsius Temperature.");
                printf("\nCelsius Temperature: ");
                scanf("%lf", &tValue_1);

                tValue_2 = ((tValue_1 * 9) / 5) + 32;

                printf("\n%.2f Celsius is equivalent to %.2f Fahrenheit.", tValue_1, tValue_2);
                getch();
                return 0;

            case 2: /* Celsius to Kelvin */
                printf("\nPlease enter the Celsius Temperature.");
                printf("\nCelsius Temperature: ");
                scanf("%lf", &tValue_1);

                tValue_2 = tValue_1 + 273.15;

                printf("\n%.2f Celsius is equivalent to %.2f Kelvin.", tValue_1, tValue_2);
                getch();
                return 0;

            default:
                printf("\nInvalid Option.");
                getch();
                return 0;
                }
            break;

        case 2:
            printf("\nTo which unit do you want to convert Fahrenheit to? ");
            printf("\n[1] Celsius\n[2] Kelvin\n");
            printf("\nChoice: ");
            scanf("%d", &temperature_2);

            switch(temperature_2){
            case 1: /* Fahrenheit to Celsius */
                printf("\nPlease enter the Fahrenheit Temperature.");
                printf("\nFahrenheit Temperature: ");
                scanf("%lf", &tValue_1);

                tValue_2 = ((tValue_1 - 32) * 5) / 9;

                printf("\n%.2f Fahrenheit is equivalent to %.2f Celsius.", tValue_1, tValue_2);
                getch();
                return 0;

            case 2: /* Fahrenheit to Kelvin */
                printf("\nPlease enter the Fahrenheit Temperature.");
                printf("\nFahrenheit Temperature: ");
                scanf("%lf", &tValue_1);

                tValue_2 = (((tValue_1 - 31) * 5) / 9) + 273.15;

                printf("\n%.2f Fahrenheit is equivalent to %.2f Kelvin.", tValue_1, tValue_2);
                getch();
                return 0;

            default:
                printf("\nInvalid Option.");
                getch();
                return 0;
            break;
            }
        case 3:
            printf("\nTo which unit do you want to convert Kelvin to? ");
            printf("\n[1] Celsius\n[2] Fahrenheit\n");
            printf("\nChoice: ");
            scanf("%d", &temperature_2);

            switch(temperature_2){
            case 1: /* Kelvin to Celsius */
                printf("\nPlease enter the Kelvin Temperature.");
                printf("\nKelvin Temperature: ");
                scanf("%lf", &tValue_1);

                tValue_2 = tValue_1 - 273.15;

                printf("\n%.2f Kelvin is equivalent to %.2f Celsius.", tValue_1, tValue_2);
                getch();
                return 0;

            case 2: /* Kelvin to Fahrenheit */
                printf("\nPlease enter the Kelvin Temperature.");
                printf("\nKelvin Temperature: ");
                scanf("%lf", &tValue_1);

                tValue_2 = (((tValue_1 - 273.15) * 9) / 5) + 32;

                printf("\n%.2f Kelvin is equivalent to %.2f Fahrenheit.", tValue_1, tValue_2);
                getch();
                return 0;

            default:
                printf("\nInvalid Option.");
                getch();
                return 0;
            break;
            }

        default:
            printf("\nInvalid Option.");
            getch();
            break;
    }

    return 0;
}
