#include <stdio.h>

void main(){
    char str[100], anotherStr[100], yeah[100] = "yeah";
    int j;

    scanf("%s", &str);

    for(int i = 0; yeah[i] != '\0'; i++){
        anotherStr[i] = yeah[i];
        j = i;
    }
    j++;
    anotherStr[j] = ' ';
    j++;

    for(int i = 0; str[i] != '\0'; i++){
        anotherStr[j] = str[i];
        j++;
    }
    anotherStr[j] = '\0';
    printf("%s", anotherStr);


}