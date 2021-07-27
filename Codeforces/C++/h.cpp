#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k,l;
    char c[150];
    char s[]="hello";
    gets(c);
    l=strlen(c);
    j=0;
    for(i=0; i<l; i++)
    {
            if(c[i]==s[j])
            {
                j++;
                k++;
            }
    }
    if(k==5)
        printf("YES\n");

    else
        printf("NO\n");

    return 0;
}
