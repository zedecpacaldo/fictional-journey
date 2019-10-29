#include <stdio.h>

void main(){
    int n, prime, answer;

    scanf("%d", &n);

    for(int i = 2; i < n; i++){
        prime = 1;
        for(int j = 2; j < i; j++){
            if(i%j == 0){
                prime = 0;
            }

            
        }
    if(prime == 1){
        answer = i;
        }
    }

    printf("%d", answer);
}