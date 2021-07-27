#include<stdio.h>
#include<string.h>
main()
{
    char a[1000];
    gets(a);
    if(islower(a[0]))
       a[0]=toupper(a[0]);
    puts(a);
}
