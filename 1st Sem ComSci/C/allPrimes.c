#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
    int a, b, c, prime_a = 1, prime_b = 1, prime_c = 1;   
    srand(time(NULL));

    a = rand() % 98+2;
    b = rand() % 98+2;
    c = rand() % 98+2;
    
    printf("Numbers: %d %d %d", a, b, c);
    for(int i = 2; i<a; i++){
        if(a%i == 0){
            prime_a = 0;
        }
    }
    printf("\nPrime Numbers: ");

    if(prime_a == 1){
        printf("%d ", a);
    }

    for(int i = 2; i<b; i++){
        if(b%i == 0){
            prime_b = 0;
        }
    }

    if(prime_b == 1){
        printf("%d ", b);
    }

    for(int i = 2; i<c; i++){
        if(c%i == 0){
            prime_c = 0;
        }
    }

    if(prime_c == 1){
        printf("%d ", c);
    }
}
