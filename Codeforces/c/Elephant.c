#include<stdio.h>
main()
{
    int a[]={1,2,3,4,5},i=4,j,n,s=0,c=0;
    scanf("%d",&n);
    while(s<n)
    {
        if(n>=a[i])
            {
                s=s+a[i];
                c++;
            }
        else
            i--;
    }
    printf("%d",c);

}
