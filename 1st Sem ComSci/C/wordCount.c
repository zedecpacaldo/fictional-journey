#include <stdio.h>

void main(){
    char word[100];
    int count = 0;

    scanf("%[^\n]%*c", &word);

    for(int i = 0; word[i] != '\0'; i++){
        if(word[i] == ' ' || word[i] == '.'){
            count++;
        }
    }

    printf("%d", count);

}