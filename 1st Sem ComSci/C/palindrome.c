#include <stdio.h>

void main(){
    int n, reversed = 0, m, palindrome = 1;

    scanf("%d", &n);
    m = n;

    while(m > 0){
        reversed = reversed + (m%10);
        reversed = reversed * 10;
        m = m/10;
    }

    reversed = reversed/10;
    
    while(n > 0){
        if(n%10 != reversed%10){
            palindrome = 0;
        }
        n = n/10;
        reversed = reversed/10;
    }

    if(palindrome == 1){
        printf("Yessur");
    } else {
        printf("Nomam");
    }
}