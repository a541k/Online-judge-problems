#include <stdio.h>
main()
{
    int i, j, n;
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        for(j=i; j<=n; j++)
        {
            if(i==1 || j==i || j==n)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
