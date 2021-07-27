#include<stdio.h>
main()
{
    int n,a[1003],c=0,i,j=1,b=0,s=0;
    scanf("%d",&n);

    for(i=0;i<n;i++)
           scanf("%d",&a[i]);
    for(i=0;i<n-1;i++)
    {
        if(a[i]>a[j])
        {
            b=a[i]; s=a[j];c++;
            break;

        }
        if(a[i]<a[j])
        {
            b=a[j]; s=a[i];c++;
            break;
        }
        j++;
    }
    for(i=1;i<n;i++)
    {
        if(a[i]>b && a[i]!=a[i-1])
        {
            c=c+1;
            b=a[i];
        }
        else if(a[i]<s)
        {
            c=c+1;
            s=a[i];
        }
    }
    printf("%d\n",c);
}
