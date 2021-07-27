#include<stdio.h>
main()
{
    int a[110],t,n,i,c=0;
    scanf("%d%d",&t,&n);
    for(i=0;i<=t-1;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=t-1;i++)
    {
        if(a[i]>0 && i<=n-1)
            c++;
        if(i>n-1 && a[i]>0 && a[i]==a[i-1])
            c++;
            if(i>n-1 && a[i]>0 && a[i]!=a[i-1])
                break;
    }
    printf("%d",c);
}
