#include <stdio.h>

void main(){
    char word[100];
    int count = 0;

    scanf("%s", &word);

    for(int i = 0; word[i] != '\0'; i++){
        if(word[i] == 'm' && word[i+1] == 'e'){
            count++;
        }
    }

    printf("%d", count);
}