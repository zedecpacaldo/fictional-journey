#include <stdio.h>
#include <string.h>

int main(){
    char Reversed[10] = {};
    int i;

    scanf("%s", Reversed); 

    for(i = strlen(Reversed); i >= 0; i--){
        printf("%c", Reversed[i]);
    }
}
