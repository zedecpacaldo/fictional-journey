#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m, n, i;

    printf("Input M: "); scanf("%d", &m);
    printf("Input N: "); scanf("%d", &n);

    if(m<n)
    {
        for(i=m; i<=n; i++)
        {
            if(i%2==0)
            {
                printf("%d\n", i);
            }
        }
    }
    else
    {
        for(i=n; i<=m; i++)
        {
            if(i%2==0)
            {
                printf("%d\n", i);
            }
        }
    }
    return 0;
}
