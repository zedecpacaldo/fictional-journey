#include <stdio.h>

void main(){
    char sentence[100];
	scanf("%[^\n]%*c", &sentence);

    for(int i = 0; sentence[i] != '\0'; i++){
        if(i%2 == 0){
            printf("%c", sentence[i]);
        } else {
            printf("%c", sentence[i] - 32);
        }
    }
}