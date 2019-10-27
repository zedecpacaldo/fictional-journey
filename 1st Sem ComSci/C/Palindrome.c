#include <stdio.h>

void main(){
    int num, a, reversedNumber=0, palindrome = 1;

    scanf("%d", &num);
    a = num;
    while(a > 0){
        reversedNumber = reversedNumber + (a%10);
        reversedNumber = reversedNumber * 10;
        a = a / 10;
    }

    reversedNumber = reversedNumber/10;
    
    while(num > 0){
        if(num%10 != reversedNumber%10){
            palindrome = 0;
        }
        num = num / 10;
        reversedNumber = reversedNumber/10;
    }


    if(palindrome == 1){
        printf("Palindrome");
    } else {
        printf("Not.");
    }
}


