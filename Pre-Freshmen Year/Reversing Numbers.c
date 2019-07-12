#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    int number, reversed = 0;

    printf("Please enter the number you wish to reverse: ");
    scanf("%d", &number);

    while(number != 0){
        reversed = reversed * 10;
        reversed = reversed + number%10;
        number = number / 10;
    }

    printf("The reversed number is %d.", reversed);

    return 0;
}

