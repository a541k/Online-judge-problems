#include<iostream>
using namespace std;
main()
{
    int n;
    cin>>n;
    int a,extra0=0,max0=-1,total1=0;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        if(a==1)
        {
            total1++;
            if(extra0>0)
                extra0--;
        }
        else
        {
            extra0++;
            if(extra0>max0)
                max0=extra0;
        }
    }
    cout<<total1+max0;

}
