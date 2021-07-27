#include<stdio.h>
#include<math.h>
main()
{
    long int n,i,s=0;
    scanf("%ld",&n);
    if(n%2==0)
        printf("%ld",n/2);
    else
        printf("%ld",-((n/2)+1));
}
