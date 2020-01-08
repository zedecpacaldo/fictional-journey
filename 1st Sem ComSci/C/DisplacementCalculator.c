#include <stdio.h>

void main(){
    int startingSpeed, seconds;

    scanf("%d %d", &startingSpeed, &seconds);

    for(int i = 1; i <= seconds; i++){
        printf("%d, ", startingSpeed*i);
    }
}