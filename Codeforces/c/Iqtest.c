#include<stdio.h>
main()
{
    int n,a[110],i,j,e=0,o=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }

    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
           e++;
        else if(a[i]%2!=0)
            o++;
    }
    if(e==1)
    {
        for(i=0;i<n;i++)
        {
            if(a[i]%2==0)
                {
                    e=i+1;break;
                }
        }
        printf("%d",e);
    }
    if(o==1)
    {
        for(i=0;i<n;i++)
        {
            if(a[i]%2!=0)
                {
                    o=i+1;break;
                }
        }
        printf("%d",o);
    }
}
