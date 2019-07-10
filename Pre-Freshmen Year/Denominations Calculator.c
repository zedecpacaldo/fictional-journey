#include <stdio.h>
#include <stdlib.h>


int main()
{
    int amount;
    printf("Enter amount: ");
    scanf("%d", &amount);
    printf("\nDenominations:");
    printf("\n1000: %d", amount / 1000);
    printf("\n500: %d", (amount % 1000) / 500);
    printf("\n200: %d", ((amount % 1000) % 500) / 200);
    printf("\n100: %d", (((amount % 1000) % 500) % 200) / 100);
    printf("\n50: %d", ((((amount % 1000) % 500) % 200) % 100) / 50);
    printf("\n20: %d", (((((amount % 1000) % 500) % 200) % 100) % 50) / 20);
    printf("\n10: %d", ((((((amount % 1000) % 500) % 200) % 100) % 50) % 20) /10);
    printf("\n5: %d", (((((((amount % 1000) % 500) % 200) % 100) % 50) % 20) % 10) / 5);
    printf("\n1: %d", ((((((((amount % 1000) % 500) % 200) % 100) % 50) % 20) % 10) % 5) / 1);
    return 0;
}



