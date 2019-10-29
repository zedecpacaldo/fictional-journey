#include <stdio.h>

void main(){
    int a, b;

    printf("Enter A: "); 
    scanf("%d", &a);
    printf("Enter B: "); 
    scanf("%d", &b);

    b = b+a;
    a = b-a;
    b = b-a;

    printf("\n(SWAPPED)\n\nA: %d\nB: %d", a, b);
}