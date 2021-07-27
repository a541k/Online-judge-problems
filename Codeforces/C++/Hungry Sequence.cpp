#include<iostream>
//#define max 9999999;
using namespace std;
main()
{
    long a;
    cin>>a;
    long i,j,c,p[a],k;

   // memset(p,true,sizeof(p));
    for(i=2,j=0;i<=100,j<a;i++,j++)
    {
        //cout<<"f";
        p[j]=i;
            for(k=2;k<i/2;k++)
            {
                //cout<<"f";
                if(p[j]%k==0)
                {
                    j--;
                    break;
                }

            }
    }
    for(j=0;j<a;j++)
    {
            cout<<p[j]<<" ";
    }
}
