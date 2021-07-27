#include<stdio.h>
#include<string.h>
#include<ctype.h>
main()
{
    char a[110];
    int i,l,j,t;
    gets(a);
    l=strlen(a);
    for(i=0;i<=l-1;i++)
    {
        if(a[i]=='+')
            continue;
        for(j=i+2;j<=l-1;j+=2)
        {
            if(a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    puts(a);

}
