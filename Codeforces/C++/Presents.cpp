#include<stdio.h>
main()
{
    int n,p[110],i,j=1,k;
    scanf("%d%",&n);
    for(i=0;i<n;i++)
        {
            scanf("%d",&p[i]);
        }
        for(k=0;k<n;k++)
        {
    for(i=0;i<n;i++)
    {
        if(p[i]==j)
        {
            printf("%d ",i+1);
            j++;
        }
    }
        }

}
