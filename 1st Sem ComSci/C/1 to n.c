#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 1, count = 0, sum = 0;

    printf("Give me a number: ");
    scanf("%d", &count);

    while(count > 0)
    {
        if(i%2==0){
            count--;
            sum = sum+i;
        } i++;
    } printf("%d", sum);
    return 0;
}

/*

*/
