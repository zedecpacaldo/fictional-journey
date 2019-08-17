#include <stdio.h>

int main()
{
    int num = 0, i = 0;

    printf("Input Number: ");
    scanf("%d", &num);

    for(i=2; i*i <= num; i++){
        if(num%i==0){
            printf("Not Prime.");
            return 0;
        }
    } printf("Prime.");
    return 0;
}
