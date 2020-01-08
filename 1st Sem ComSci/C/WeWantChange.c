#include <stdio.h>


void main()
{
    int amount;
    scanf("%d", &amount);
    printf("\n100: %d", amount / 100);
    printf("\n50: %d", (amount% 100) / 50);
    printf("\n20: %d", ((amount % 100) % 50) / 20);
    printf("\n10: %d", (((amount % 100) % 50) % 20) /10);
    printf("\n5: %d", ((((amount % 100) % 50) % 20) % 10) / 5);
    printf("\n1: %d", (((((amount % 100) % 50) % 20) % 10) % 5) / 1);
}