#include <stdio.h>

void main(){
    char word[100], reverse[100];
    int palindrome = 1, count = 0;

    scanf("%s", &word);

    for(int i = 0; word[i] != '\0'; i++){
        count++;
    }

    int j = 0;

    for(int i = count-1; i >= 0; i--){
        reverse[j] = word[i];
        j++;
    }

    for(int i = 0; word[i] != '\0'; i++){
        if(word[i] != reverse[i]){
            palindrome = 0;
        }
    }
    printf("%d", palindrome);
}