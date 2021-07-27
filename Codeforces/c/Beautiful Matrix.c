#include<stdio.h>
#include<stdlib.h>

main()
{
    int i,j,n,a[5][5];
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            scanf("%d",&a[i][j]);

        }
    }
     for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
             if(a[i][j]==1)
            {
                n=abs(i-2)+abs(j-2);
                printf("%d",n);
            }
        }
    }


}
