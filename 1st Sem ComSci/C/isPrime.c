#include <stdio.h>

int isPrime(int num);

int main(){
    int n;

    scanf("%d", &n);
    if(isPrime(n) == 1){
        printf("Prime.");
    } else {
        printf("Not Prime.");
    }
}


int isPrime(int num){
    int prime = 1, i;

    for(i= 2; i < num; i++){
        if(num%i == 0){
            prime = 0;
            break;
        }
    }

    return prime;
}
