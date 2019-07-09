#include <stdio.h>
#include <stdlib.h>


int main()
{

    int x1, y1, x2, y2;
    int x,y;
    float distance, slope;

    printf("Input:");
    printf("\nEnter value of x1 and y1: ");
    scanf("%d %d", &x1, &y1);
    printf("Enter value of x2 and y2: ");
    scanf("%d %d", &x2, &y2);

    x = x2 - x1;
    y = y2 - y1;
    distance = sqrt((x*x)+(y*y));
    slope = x/y;

    printf("\n\nOutput: ");
    printf("\nThe slope between two points is: %.2f", slope);
    printf("\nThe distance between 2 points is: %.2f", distance);
    getch();


    return 0;
}




