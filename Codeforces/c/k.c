#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int i,j,k,l,n;

    char c[150],s,d;

    scanf("%d",&n);
    getchar();

    s='a';
    gets(c);
    l=strlen(c);

    k=0;
    for(i=0;i<l;i++)
    {
        if(isupper(c[i]))
        c[i]=tolower(c[i]);
    }
    for(i=0;i<l-1;i++)
        for(j=i+1;j<l;j++)
        if(c[i]>c[j])
    {
        d=c[i];
        c[i]=c[j];
        c[j]=d;
    }

    for(i=0;i<l && s<='z';i++)
    {
        if(c[i]==s)
        {
            k++;
            s=s+1;
        }
    }
    if(k==26)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
