#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0, n = 0;

    printf("Input N: "); scanf("%d", &n);

    for(i=1; i <= n*2; i+=2)
    {
        printf("%d ", i);
    }
    return 0;
}
