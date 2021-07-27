#include<stdio.h>
main()
{
    int l,p,q,a[111],b[111],c[211],i,j,t=0,g=0;
    scanf("%d%d",&l,&p);
    for(i=0;i<p;i++)
        scanf("%d",&a[i]);
    scanf("%d",&q);
    for(i=0;i<q;i++)
        scanf("%d",&b[i]);
    for(i=0;i<l;i++)
    {
        c[i]=i+1;
    }
    for(i=0;i<p;i++)
        for(j=i+1;j<p;j++)
        if(a[i]>a[j])
        {
            t=a[j];
            a[j]=a[i];
            a[i]=t;
        }

    for(i=0;i<q;i++)
        for(j=i+1;j<q;j++)
            if(b[i]>b[j])
            {
            t=b[j];
            b[j]=b[i];
            b[i]=t;
            }
    t=0;
    for(j=0;j<l;j++)
    {
        for(i=0;i<p;i++)
            if(a[i]==c[j])
            {
                t=t+1;
                g=1;
                break;
            }
        if(g!=1)
        {
            for(i=0;i<q;i++)
            if(c[j]==b[i])
            {
                 t=t+1;
                break;
            }
        }
        g=0;
    }


    if(t==l)
        printf("I become the guy.");
    else
        printf("Oh, my keyboard!");

}
