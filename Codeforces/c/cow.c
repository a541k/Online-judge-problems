#include<stdio.h>
main()
{
    int t,x1,x2,y1,y2,n,a[109],b[109],i,j,r;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d%d%d%d",&x1,&y1,&x2,&y2);

        scanf("%d",&n);
        for(j=0;j<n;j++)
        {
            scanf("%d%d",&a,&b);
            if(j=0)
                printf("Case %d:\n",i);
            if(a>x1 &&a<x2 && b>y1 &&b<y2)
                printf("Yes\n");
            else printf("No\n");

        }
    }
}
