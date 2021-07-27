#include<stdio.h>
main()
{
    int i,j=0,l;
    char a[211],b[211];
    gets(a);
    for(i=0;i<strlen(a);i++)
    {
        if(a[i]=='W'&& a[i+1]=='U'&& a[i+2]=='B')
        {
            l=1;
            i=i+2;
        }
       else
        {
        if(j>0&&l==1)
            {
            b[j]=' ';
            j++;
            }
            l=0;

                b[j]=a[i];
                j++;

         }

    }
    b[j]='\0';
    puts(b);
}
