#include<string.h>
#include<ctype.h>
#include<stdio.h>
main()
{
    char a[110],b[]="abcdefghijklmnopqrstuvwxyz";
    int l,c=1,i,j,t;
    l=strlen(gets(a));
    for(i=0;i<l;i++)
    {
        for(j=i+1;j<l;j++)
        {
            if(a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }


    }
     for(i=0,j=1;i<l,j<l;i++,j++)
    {
        if(a[i]==a[j])
        continue;
        else
            c++;
    }
    if(c%2==0)
        printf("CHAT WITH HER!\n%d",c);
    else
        printf("IGNORE HIM!\n%d",c);

}

