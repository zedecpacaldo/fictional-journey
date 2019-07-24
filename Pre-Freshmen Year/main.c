#include <stdio.h>
#include <string.h>

int main(){
    int number, evaluator;

    printf("Input an integer: "); scanf("%d", &number);
    evaluator = number % 2;

    if(evaluator  <= 0){
        printf("\n%d is an Even Number.", number);
    } else {
        printf("\n%d is an Odd Number.", number);
    }

    return 0;
}
