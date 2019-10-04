#include <stdio.h>

int main(){
    char word[20] = {"Computers"};
    char n;
    int present = 0, i;

    scanf("%c", &n);

    for(i = 0; i <= 20; i++){
        if(word[i] == n){
            present = 1;
        }
    }

    switch(present){
        case 1:
            printf("Present.");
            break;
        
        case 0:
            printf("Not Present.");
            break;

    }

}
