#include<stdio.h>
main()
{
    long int n,a,b,i,j,k;
    scanf("%ld",&n);
    for(i=4;i<=n/2;i++)
    {
        j=n-i;
        for(k=2;k<=j/2;k++)
        {
            if(i%k==0 && i!=k)
                    a=i;

            if(j%k==0)
                b=j;

        }
        if(a+b==n)
            break;

    }
    printf("%ld %ld",a,b);
}
