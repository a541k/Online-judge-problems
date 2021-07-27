#include<stdio.h>
#include<string.h>
#include<ctype.h>
main()
{
    char a[210],b[210];
    int i,l,k,j=0,p=0;
    gets(a);
    l=strlen(a);
    for(i=0;i<l;i++)
    {
        k=0;
        if(a[i]=='W'&& a[i+1]=='U' && a[i+2]=='B')
        {
            k=1;
            i=i+2;
        }
        if(k==1)
            continue;
        if(k==0)
        {
            b[j]=a[i];
            j++;
        }

    }puts(b);
}
