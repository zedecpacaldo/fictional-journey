#include <stdio.h>

void main(){
    int n, x, i = 2;

    scanf("%d", &n);
    x = n;
    
    while(x > 1){
        if(x % i == 0){
            printf("%d, ", i);
            x = x/i;
        } else {
            i++;
        }
    }

}