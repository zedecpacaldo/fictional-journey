#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    char restaurantName[] = "Zedec";
    char viand_1[20], viand_2[20], viand_3[20], viand_4[20], viand_5[10];

    double price_1, price_2, price_3, price_4, price_5;

    printf("Hello, welcome to %s's Restaurant. Please enter your viand selection one by one.", restaurantName);
    printf("\n\n================================================================================== \n\n");
    printf("Name of viand: ");
    scanf("%s", &viand_1);
    printf("Price of %s: P", viand_1);
    scanf("%lf", &price_1);
    printf("\nYou entered %s for P%.2f. Please enter another viand.\n", viand_1, price_1);
    printf("\nName of viand: ");
    scanf("%s", &viand_2);
    printf("Price of %s: P", viand_2);
    scanf("%lf", &price_2);
    printf("\nYou entered %s for P%.2f. Please enter another viand.\n", viand_2, price_2);
    printf("\nName of viand: ");
    scanf("%s", &viand_3);
    printf("Price of %s: P", viand_3);
    scanf("%lf", &price_3);
    printf("\nYou entered %s for P%.2f. Please enter another viand.\n", viand_3, price_3);
    printf("\nName of viand: ");
    scanf("%s", &viand_4);
    printf("Price of %s: P", viand_4);
    scanf("%lf", &price_4);
    printf("\nYou entered %s for P%.2f. Please enter one last viand.\n", viand_4, price_4);
    printf("\nName of viand: ");
    scanf("%s", &viand_5);
    printf("Price of %s: P", viand_5);
    scanf("%lf", &price_5);
    printf("\nYou entered %s for P%.2f.\n", viand_5, price_5);
    printf("\n\n================================================================================== \n\n");
    printf("\nYou have entered the following viands for your meal:");
    printf("\n%s for P%.2f", viand_1, price_1);
    printf("\n%s for P%.2f", viand_2, price_2);
    printf("\n%s for P%.2f", viand_3, price_3);
    printf("\n%s for P%.2f", viand_4, price_4);
    printf("\n%s for P%.2f", viand_5, price_5);

    double total = price_1 + price_2 + price_3 + price_4 + price_5;
    double vat = total * 0.12;
    double grandTotal = total + vat;

    printf("\n12%% VAT: P%.2f", vat);
    printf("\nTotal: P%.2f\n", grandTotal);
    printf("\nPlease pay the right amount to cashier. Thank you and have a nice day.");
    getch();
    return 0;
}

