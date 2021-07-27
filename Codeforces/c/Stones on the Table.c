#include<stdio.h>
#include<string.h>
#include<ctype.h>
main()
{
    int n,i,c=0,j;
    char a[55];
    scanf("%d",&n);
    getchar();
    for(i=0;i<=n-1;i++)
    {
        scanf("%c",&a[i]);
    }
    for(i=0,j=1;i<n-1,j<n;i++,j++)
    {
        if(a[i]==a[j])
            c++;
    }
    printf("%d",c);
}
