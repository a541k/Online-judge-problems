#include<stdio.h>
main()
{
    long int n,a[100022],c=1,t=0;
   long int i,j;
    scanf("%ld",&n);
    for(i=0;i<n;i++)
        scanf("%ld",&a[i]);
    for(i=0;i<n-1;i++)
    {
        if(a[i+1]>a[i] || a[i+1]==a[i])
            c++;
        if(i==0 || a[i+1]<a[i])
        {
            if(t<c)
            t=c;
            if(a[i+1]<a[i])
            c=1;
        }


    }
  if(c>t)

        printf("%ld",c);
   else
        printf("%ld",t);
}
