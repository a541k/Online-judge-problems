#include<stdio.h>
main()
{
    int n,i,j,l,c=1;
    scanf("%d",&n);
    int a[n],b[n/2];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[i])
            {
                int t=a[j];
                a[j]=a[i];
                a[i]=t;
            }
        }
    }
    int k=0;
     for(i=0;i<n;i++)
     {
         c=0;
         if(i>1 && a[i]==a[i+1])
         {i=i+1;continue;}
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
                c++;
        }
        b[k]=c;
        k++;
     }
     for(i=0;i<k;i++)
        printf("%d ",b[i]);
}
