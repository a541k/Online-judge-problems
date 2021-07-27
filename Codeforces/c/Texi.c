#include<stdio.h>
main()
{
    int n,a[100010],i,s=0,t;
    scanf("%d",&n);
    for(i=0;i<=n-1;i++)
        scanf("%d",&a[i]);
    for(i=0;i<=n-1;i++)
    {
        s=s+a[i];
    }
    t=s/4;
    if(s%4!=0)
        t=t+1;
    printf("%d",t);


}
