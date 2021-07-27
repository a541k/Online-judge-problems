#include<stdio.h>
#include<string.h>
#include<ctype.h>
main()
{
    char a[110],b[]="hello";
    int l,i,j=0,k=0;
    gets(a);
    l=strlen(a);
    for(i=0;i<=l-1;i++)
    {
        if(a[i]==b[j])
        {
            j++;
            k++;
        }
    }
    if(k==5)
        printf("YES");
    else
        printf("NO");
}
