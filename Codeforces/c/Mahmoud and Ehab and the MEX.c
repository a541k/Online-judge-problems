#include<stdio.h>
main()
{
    int n,a[110],x,i,j,c=0,k=0;
    scanf("%d%d",&n,&x);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        if(a[i]<x)
            c++;
        if(a[i]==x)
                c--;
    }
    k=x-c;
    printf("%d",k);
}
