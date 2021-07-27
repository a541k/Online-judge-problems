#include<iostream>
using namespace std;
main()
{
    int t,i,x,c=0,k,l;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>x;
        if(x%3==0)
            c=1;
        else if(x%7==0)
            c=1;
        else
         {

                for(k=x/7;k>0;k--)
                {
                    l=x-7*k;
                    if(l%3==0)
                    {
                        c=1;
                        break;
                    }
                }


         }
         if(c==1)
            cout<<"YES\n";
         else
            cout<<"NO\n";
         c=0;
    }

}
