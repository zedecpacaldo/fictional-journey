#include <stdio.h>

void main(){
    int index, j, count = 0;
    char word[100], substr[100], anotherStr[100];

    scanf("%d %s %s", &index, &word, &substr);

    for(int i = 0; word[i] != '\0'; i++){
        anotherStr[i] = word[i];
        j = i;
    }

    for(int i = 0; substr[i] != '\0'; i++){
        count++;
    }

    for(int i = j; i >= index; i--){
        anotherStr[i+count] = anotherStr[i];
    }

    anotherStr[j+count+1] = '\0';

    j = index;
    for(int i = 0; substr[i] != '\0'; i++){
        anotherStr[j] = substr[i];
        j++;
    }

    printf("%s", anotherStr);
}