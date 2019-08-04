#include <stdio.h>
#include <math.h>

int main(){
    int num_1, num_2, large, small;

    printf("Enter your first number: "); scanf("%d", &num_1);
    printf("Enter your second number: "); scanf("%d", &num_2);

    if(num_1 > num_2){
        large = num_1;
        small = num_2;

        printf("\nSmaller Number: %d.", small);
        printf("\nLarger Number: %d.", large);
        printf("\nAscending: %d, %d.", small, large);
        printf("\nDescending: %d, %d.", large, small);

        } else if(num_2 > num_1){
            large = num_2;
            small = num_1;

        printf("\nSmaller Number: %d.", small);
        printf("\nLarger Number: %d.", large);
        printf("\nAscending: %d, %d.", small, large);
        printf("\nDescending: %d, %d.", large, small);
            } else {
                printf("\nCannot have two equal value numbers.");
                }

    return 0;
}
