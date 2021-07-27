#include<stdio.h>
#include<string.h>
#include<ctype.h>
main()
{
    char a[210],b[110],c[210];
    int l,i,j,t;
    gets(a);
    gets(b);
    gets(c);
    strcat(a,b);
    l=strlen(a);
    for(i=0;i<=l-1;i++)
    {
        for(j=i+1;j<=l-1;j++)
        {
            if(a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;

            }
            if(c[i]>c[j])
            {
                t=c[i];
                c[i]=c[j];
                c[j]=t;

            }

        }
    }
    if(strcmp(a,c)==0)
        printf("YES");
    else
        printf("NO");




}
