#include <stdio.h>
#include <math.h>

int main(){
    int number, evaluator;

    printf("Input an integer: "); scanf("%d", &number);
    if(number % 15 == 0){
        printf("\nFIZZBUZZ!");
        getch();
    } else if(number % 5 == 0){
        printf("\nBUZZ!");
        getch();
    } else if(number % 3 == 0){
        printf("\nFIZZ!");
        getch();
    } else {
        printf("\nBAZINGA!");
        getch();
    }

    return 0;
}
