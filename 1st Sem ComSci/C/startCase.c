#include <stdio.h>

void main(){
    char ws[100];
    scanf("%[^\n]%*c", &ws);

    int j = 0;

    if(ws[0] >= 'a' && ws[0] <= 'z'){
        ws[0] = ws[0] - 32;
    }

   
    for(int i = 1; ws[i] != '\0'; i++){
        if(ws[i-1] == ' '){
            if(ws[i] >='a' && ws[i] <= 'z'){
                ws[i] = ws[i] - 32;
            }
        } else if(ws[i] >= 'A' && ws[i] <= 'Z'){
                ws[i] = ws[i] + 32;
        }
    }
    
    printf("%s", ws);

}