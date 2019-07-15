#include <stdio.h>
#include <string.h>

int main(){

    double length, width, area, perimeter;

    printf("Enter the Length: ");
    scanf("%lf", &length);
    printf("\nEnter the Width: ");
    scanf("%lf", &width);

    area = length * width;
    perimeter = (2 * length) + (2* width);

    printf("\nArea = %.2f", area);
    printf("\nPerimeter = %.2f", perimeter);

    return 0;
}
