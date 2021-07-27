#include<stdio.h>
main()
{
    int n,a[22],t,i,j;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        int b=0,c=0;
        scanf("%d",&n);
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[j]);
            if(a[j]==1)
                b=b+1;
            if(a[j]==2)
                c=c+1;
        }
        if(b>c)
            printf("Kobayashi\n");
        if(c>b)
            printf("Tohru\n");
        if(b==c)
            printf("Draw\n");

    }
}
