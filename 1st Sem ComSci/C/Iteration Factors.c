#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m, n, i;

    printf("Input M: "); scanf("%d", &m);
    printf("Input N: "); scanf("%d", &n);

    if(m>n)
    {
        for(i=1; i<=m; i++)
        {
            if(m%i==0 && n%i==0)
            {
                printf("%d\n", i);
            }
        }
    } else
    {
        for(i=1; i<n; i++)
        {
            if(m%i==0 && n%i==0)
            {
                printf("%d\n", i);
            }
        }
    }
    return 0;
}
