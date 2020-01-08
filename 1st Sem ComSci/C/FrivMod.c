#include <stdio.h>

void main(){
    char sentence[100], jerky[5] = "jerk", jerky1[5] = "Jerk";
	scanf("%[^\n]%*c", &sentence);

    for(int i = 0; sentence[i] != '\0'; i++){
        if((sentence[i] == 'J' || sentence[i] == 'j') && (sentence[i+1] == 'E' || sentence[i+1] == 'e') && (sentence[i+2] == 'R' || sentence[i+2] == 'r') && (sentence[i+3] == 'K' || sentence[i+3] == 'k')){
            sentence[i] = '*';
            sentence[i+1] = '*';
            sentence[i+2] = '*';
            sentence[i+3] = '*';
        }
    }

    printf("%s", sentence);
}