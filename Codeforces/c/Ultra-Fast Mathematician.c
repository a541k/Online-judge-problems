#include<stdio.h>
main()
{
    char a[110],b[110],c[110];
    int i,j,k,l;
    scanf("%s %s",a,b);
    l=strlen(a);
    for(i=0;i<l;i++)
    {
        if(a[i]==b[i])
            c[i]='0';
        else
            c[i]='1';
    }
    c[i]='\0';
    printf("%s",c);
}

