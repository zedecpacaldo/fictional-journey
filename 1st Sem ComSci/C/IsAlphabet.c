#include <stdio.h>

void main(){
    char c;
    int flag = 0;

    scanf("%c", &c);

    if(c >= 'a' && c <= 'z'){
        printf("alpha");
        flag = 1;
    }

    if(c >= 'A' && c <= 'Z'){
        printf("alpha");
        flag = 1;
    }

    if(flag == 0){
        printf("not alpha");
    }
}