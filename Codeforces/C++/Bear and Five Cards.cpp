#include<iostream>
using namespace std;
main()
{
    int a[5],i,j,c=1,sum=0,temp=0,f=0,s=0;
    for(i=0;i<5;i++)
        {
            cin>>a[i];
            s=s+a[i];
        }
    for(i=0;i<4;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(a[i]==a[j])
            {
                c++;
                if(c>3)
                    break;
                sum=c*a[i];
                if(sum>temp)
                    temp=sum;
            }
        }
        c=1;
        sum=0;

    }
    cout<<s-temp;
}
