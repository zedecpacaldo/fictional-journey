#include <stdio.h>

void main(){
    int j = 0;
    char sentence[100], decrypted[100];
    char letters[26] = {0};

	scanf("%[^\n]%*c", &sentence);

    for(int i = 0; sentence[i] != '\0'; i++){
        if(sentence[i] == ' '){
            decrypted[i] = ' ';
            j++;
        } else if((sentence[i] >= 'X' && sentence[i] <= 'Z') || (sentence[i] >= 'x' && sentence[i] <= 'z')){
            decrypted[i] = sentence[i] - 23;
            j++;
        } else {
            j++;
            decrypted[i] = sentence[i] + 3;
        }

    }

    decrypted[j] = '\0';
    printf("%s", decrypted);
    
}