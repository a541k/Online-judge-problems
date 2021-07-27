#include<stdio.h>
#include<string.h>
main()
{
    int i,n;
    char a[30],b[30];
    scanf("%d",&n);
    getchar();
    for(i=1;i<=n;i++)
  {
    gets(a);
    strcpy(b,a);
    strrev(b);
    if(strcmp(a,b)==0)
    {
        printf("Case %d: Palindrome\n",i);
    }
    else
    {
        printf("Case %d: Not palindrome\n",i);
    }
  }
}
