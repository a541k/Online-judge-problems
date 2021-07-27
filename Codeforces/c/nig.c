#include<stdio.h>
#include<string.h>
#include<ctype.h>
main()
{
    char a[110];
    int i,l,j=0;
    l=strlen(gets(a));
    for(i=0;i<=l-1;i++)
    {
        if(a[i]=='W'&&a[i+1]=='U'&&a[i+2]=='B' &&a[i]==a[i+3]&& a[i+1]==a[i+4]&& a[i+2]==a[i+5])
        {
            i=i+2;
            continue;
        }
        if(a[i]=='W'&&a[i+1]=='U'&&a[i+2]=='B')
            {
                if(a[i+3]=='\0')
                    continue;

                if(i>0)

                    {a[j]=' ';j++; i+=2; continue;}
                i=i+2;
                continue;
            }
        else
        {
            a[j]=a[i];
            j++;
        }
    }
    for(i=0;i<=j-1;i++)
        putchar(a[i]);
}
