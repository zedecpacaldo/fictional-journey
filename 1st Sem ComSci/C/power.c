#include <stdio.h>

void main(){
    int n, power = 0, j, k, counter;

    scanf("%d", &n);

    for(int i = 2; i<n; i++){
        if(n%i == 0){
            j = i;
            k = j;
            counter = 1;
            while( j < n){
                j = j*k;
                counter++;
            }

            if(j == n){
                printf("%d, %d\n", i, counter);
                power = 1;
            }
        }
    }

    if(power ==0){
        printf("nope");
    }
}