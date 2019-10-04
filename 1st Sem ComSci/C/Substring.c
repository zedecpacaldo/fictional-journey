#include <stdio.h>
#include <string.h>

int main(){
    char word[100], subword[100];
    int i, j, count, same = 0;

    scanf("%s", &word); scanf("%s", &subword);

    for(i = 0; word[i] != '\0'; i++){
        count = 0;
        if(word[i] == subword[count]){
            count++;
        }

        if(count == strlen(subword)-1){
            same = 1;
        }
    }

    printf("%d", same);
}
