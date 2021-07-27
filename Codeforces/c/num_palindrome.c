#include<stdio.h>
main()
{
    int temp,n,r=0;
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
       r=r*10;
       r=r+temp%10;
       temp=temp/10;
    }
    printf("%d",r);
    if(r==n)
        printf("palindrome\n");
    else
        printf("not palindrome\n");
}
