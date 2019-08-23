#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m, i;

    printf("Input M: "); scanf("%d", &m);

    printf("\nNumbers that can divide %d:", m);
    for(i=1; i <=m; i++)
    {
        if(m%i==0)
        {
            printf("\n%d", i);
        }
    }
    return 0;
}
