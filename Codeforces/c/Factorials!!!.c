#include<stdio.h>
#include<ctype.h>
#include<string.h>
main()
{
    long long int n,k,i,j,f=1;
    char a[33];
    scanf("%lld",&n);
    scanf("%s",a);
    k=strlen(a);


        for(i=0;i<=n;i++)
        {
            if((n-i*k)>0)
            f=f*(n-i*k);
        }


    printf("%lld",f);
}
