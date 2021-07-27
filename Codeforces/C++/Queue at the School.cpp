#include<stdio.h>
#include<string.h>
main()
{
    int n,i,j,l;
    char a[100],d[100],t;
    scanf("%d%d",&n,&l);
    getchar();
    gets(a);
    for(j=1;j<=l;j++)
    {
        //printf("a%d",n);
        for(i=0;i<n;i++)
        {
            //printf("a");

            if(a[i]=='B' && a[i+1]=='G')
            {
                a[i]='G';
                a[i+1]='B';
                i=i+1;
            }

        }
    }
    puts(a);
}
