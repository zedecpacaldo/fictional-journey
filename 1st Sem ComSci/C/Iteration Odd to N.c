#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m, n, i;

    printf("Input M: "); scanf("%d", &m);
    printf("Input N: "); scanf("%d", &n);

    if(m%2!=0)
    {
        m = m+1;
    }

    for(i=m; i<=n; i+=2)
    {
        printf("%d ", i);
    }
    return 0;
}
