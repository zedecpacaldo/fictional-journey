#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 0, result = 0;

    printf("Give me a number: ");
    scanf("%d", &num);
    result = num*(num+1);
    printf("Sum of the first %d even numbers: %d", num, result);
    return 0;
}

/*

*/
