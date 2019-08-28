  #include <stdio.h>
#include <stdlib.h>

int main()
{
    int m, n, i = 1, count = 0;

    printf("Input M: "); scanf("%d", &m);
    printf("Input N: "); scanf("%d", &n);

    while(count < 3)
    {
        if(i%m==0 && i%n==0)
        {
            printf("%d", i);
            count = count+1;
        }

    i = i+1;
    }
    return 0;
}
