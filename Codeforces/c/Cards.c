#include<stdio.h>
main()
{
    int n,p[110],i,j,s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&p[i]);
        s=s+p[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(p[i]+p[j]==2*s/n)
                {
                    printf("%d %d\n",i+1,j+1);
                    p[i]=0;p[j]=0;
                }
        }
    }

}
