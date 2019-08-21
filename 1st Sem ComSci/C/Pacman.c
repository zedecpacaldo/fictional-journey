#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 0;

    printf("Number: "); scanf("%d", &num);

    while(num > 0)
    {
        if(num%10 == 0)
        {
            printf("nyam\n");
        } else
        {
            printf("pwe!\n");
        } num = num/10;
    }
    return 0;
}

/*

*/
