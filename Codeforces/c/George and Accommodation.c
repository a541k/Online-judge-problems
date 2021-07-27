#include<stdio.h>
main()
{
    int n,a[330],b[300],i,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&a[i],&b[i]);
        if(b[i]-a[i]>=2)
            c++;
    }
    printf("%d",c);


}
