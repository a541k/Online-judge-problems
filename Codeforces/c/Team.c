#include<stdio.h>
main()
{
    int n,i,j,a[3100],c=0,d=0;
    scanf("%d",&n);
    for(i=0;i<=3*n-1;i++)
        scanf("%d",&a[i]);
        j=0;
    for(i=1;i<=n;i++)
    {
            c=0;
        for(j=j;j<=3*i-1;j++)
        {
        if(a[j]==1)
            c++;
            printf("%d\n",c);
        }
        if(c>=2)
            d++;
    }
    printf("%d",d);

}
