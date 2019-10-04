#include <stdio.h>

int main(){
    char alphabet[100] = {};
    int i;

    scanf("%s", &alphabet);

    for(i = 0; alphabet[i] != '\0'; i++){
        printf("%c", alphabet[i]-32);
    }
}
