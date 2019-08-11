#include <stdio.h>
#include <math.h>

int main(){
    int excess;
    double bill, kilowatt;

    printf("Enter kilowatt hour: "); scanf("%lf", &kilowatt);

    if(kilowatt < 250 && kilowatt > 0){
        bill = kilowatt * 75;
    } else {
        excess = kilowatt - 250;
        bill = (1875 + (excess * 8.5)) * 1.10;
        }
    printf("You consume %.2f kw/hr of electricity.\nBill: P%.2f", kilowatt, bill);


    return 0;
}
