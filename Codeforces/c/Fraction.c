#include<stdio.h>
main()
{
    int n,i,j,k,l,a,b;
    scanf("%d",&n);
    for(i=n/2;i<=n;i++)
    {
        for(k=2;k<=i/2;k++)
            if(i%k==0)
            continue;
            else a=i;
        j=n-i;
            for(k=2;k<=j/2;k++)
            if(j%k==0)
            continue;
            else b=j;
    }
    printf("%d %d",a,b);
}
