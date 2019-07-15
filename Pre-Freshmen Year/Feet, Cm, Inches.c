#include <stdio.h>
#include <stdlib.h>

int main()
{

    double feet, cm, inch;
    printf("Enter the distance(feet): ");
    scanf("%lf", &feet);

    cm = (feet * 12) * 2.54;

    printf("\n%.2f feet = %.2f cm\n", feet, cm);
    printf("\nEnter distance(inches): ");
    scanf("%lf", &inch);

    cm = (inch * 2.54);

    printf("\n%.2f inches = %.2f cm", inch, cm);
    getch();
    
    return 0
        
}
