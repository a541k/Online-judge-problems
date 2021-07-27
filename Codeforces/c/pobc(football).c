#include<stdio.h>
#include<string.h>
main()
{
    char a[100];
    int l,i,c=1,j;
    l=strlen(gets(a));
    j=1;
    for(i=0;i<=l-1;i++)
    {
        if(a[i]==a[j])
        {
            c++;
                if(c>=7){
                   printf("YES");
                   break;}
        }
        else
            c=1;
            j++;

    }
    if(c<7)
        printf("NO");

}
