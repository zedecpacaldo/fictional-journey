#include <stdio.h>
#include <math.h>

int main(){
    int number, evaluator, negative;

    printf("Enter an integer value: "); scanf("%d", &number);

    if(number < 0){
        evaluator = (number * number);
        printf("\n%d is a negative number, so the square of %d is %d.", number, number, evaluator);
        getch();
    } else {
        evaluator = (number * number * number);
        printf("\n%d is a positive nubmer, so the cube of %d is %d.", number, number, evaluator);
        getch();
    }

    return 0;
}
