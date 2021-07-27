#include<iostream>
#include<string>
using namespace std;
class baby{
public:
    string n;
    int h1,h2;
    void getname()
    {
        cin>>n;
    }
    void showname()
    {
        cout<<n;
    }
    void geth()
    {
        cin>>h1;
    }
    void geth1()
    {
        cin>>h2;
    }
    void showd()
    {
        cout <<n <<" "<<"Danger"<<endl;
    }
    void shows()
    {
        cout <<n <<" "<<"Safe"<<endl;
    }


};
int main()
{
    int t,i;
    cin>>t;
    for(i=0;i<t;i++)
    {
    baby x;
    x.getname();
    x.geth();
    x.geth1();
    if(x.h2-x.h1>5)
        x.shows();
    else
        x.showd();
    }
    return 0;
}
