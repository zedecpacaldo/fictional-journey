#include <stdio.h>

void main(){
    char w[100];
    char l;
    int flag = 0;

    scanf("%s %c", &w, &l);

    for(int i = 0; w[i] != '\0'; i++){
        if(w[i] == l){
            printf("%d ", i);
            flag = 1;
        }
    }

    if(flag == 0){
        printf("%d", -1);
    }
}