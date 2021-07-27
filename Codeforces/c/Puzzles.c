#include<stdio.h>
#include<stdlib.h>
main()
{
    int n,m,a[1100],i,c,j,t=0;
    scanf("%d%d",&n,&m);
    for(i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<m;i++)
    {
        for(j=i+1;j<m;j++)
        {
            if(a[j]>a[i])
                {
                    t=a[i];
                    a[i]=a[j];
                    a[j]=t;
                }


        }
    }
    for(i=0;i<m-n+1;i=i+1)
    {

        c=a[i]-a[i+n-1];
        if(i==0||c<t)
            t=c;
            c=0;

    }
    printf("%d",t);
}
