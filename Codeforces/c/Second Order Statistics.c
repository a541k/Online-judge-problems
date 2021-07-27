#include<stdio.h>
main()
{
    int n,i,j,c=1;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                int t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    for(i=0;i<n-1;i++)
    {
        if(a[i]<a[i+1])
        {
            printf("%d",a[i+1]);
            break;
        }
        if(a[i]==a[i+1])
            c++;
    }
    if(c==n)
        printf("NO");

}
