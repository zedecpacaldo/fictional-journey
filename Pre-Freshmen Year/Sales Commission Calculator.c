#include <stdio.h>
#include <math.h>

int main(){
    int sales;
    double commission;
    char name[20];

    printf("Input Salesman Name: ");
    scanf("%s", name);
    printf("\nInput %s's Sales: Php ", name);
    scanf("%d", &sales);
    if(sales < 10000){
        commission = sales * 0.02;
        printf("%s's Commission is Php %.2f.", name, commission);
    } else if(sales < 25000){
        commission = sales * 0.05;
        printf("%s's Commission is Php %.2f.", name, commission);
        } else if(sales < 50000){
            commission = sales * 0.1;
            printf("%s's Commission is Php %.2f.", name, commission);
            } else if(sales < 75000){
                commission = sales * 0.13;
                printf("%s's Commission is Php %.2f.", name, commission);
                } else if(sales < 100000){
                    commission = sales * 0.15;
                    printf("%s's Commission is Php %.2f.", name, commission);
                    } else {
                        commission = sales * 0.25;
                        printf("%s's Commission is Php %.2f.", name, commission);
                        }
    return 0;
}
