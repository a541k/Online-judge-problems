#include<iostream>
#include<algorithm>
#include<iomanip>
using namespace std;
int main()
{
    int t,i;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        int n,a,j,k,c=0,tc=0;
        float av=0,total=0;
        cin>>n>>a;
        float m[n],e[n];
        for(j=0; j<n; j++)
        {
            cin>>m[j];
            e[j]=m[j];
        }
        for(k=0; k<n; k++)
        {
            total=total+m[k];
        }
        av=total/(n-a);
        //if(av>6.37&&av<7)
            //av=6.37;
        cout<<setprecision(2)<<fixed<<av<<endl;
        sort(m,m+n);

        //for(j=0; j<n; j++)
            //cout<<m[j]<<"|";
        //cout<<endl;
        for(j=0; j<n; j++)
            if(m[j]!=0)
            {

                m[0]=m[j];
                break;
            }




        for(j=0; j<n; j++)
        {
            if(m[n-1]==e[j])
                cout<<j+1<<" ";
        }
        cout<<endl;
        for(j=0; j<n; j++)
        {
            if(m[0]==e[j])
                cout<<j+1<<" ";
        }
        cout<<endl;
        k=0;
        for(j=0; j<n-1; j++)
        {
            if(m[j]==m[j+1] && m[j]!=0)
            {

                c++;
                if(c>tc)
                    {
                       // e[k]=m[j]
                        k=m[j];
                        tc=c;
                        //e[0]=m[j];
                    }
            }
        }
        if(tc<=1)
            cout<<"None"<<endl;
        else
            for(j=0;j<n;j++)
            {
                if(e[j]==k)
                    cout<<j+1<<" ";
            }
            cout<<endl;

    }
    return 0;
}
