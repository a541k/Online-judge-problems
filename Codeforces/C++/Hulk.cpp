#include<iostream>
using namespace std;
main()
{
    long long n,ts,p;
    cin>>ts;
    for(p=0; p<ts; p++)
    {
        cin>>n;
        long long i,j,c,d=0,t;
        for(i=1;; i++)
        {
            n=n+1;
            c=n;
            while(c>0)
            {
                t=c%10;
                c=c/10;
                d=d*10+t;

            }
            if(d==n)
            {
                break;
            }
            d=0;
        }
        cout<<n<<endl;

    }

}
