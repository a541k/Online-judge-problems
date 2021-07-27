#include<iostream>
#include<string>
using namespace std;
main()
{
    long p=0;
    int n,i;
    string a;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a;
        (a=="Tetrahedron")?p=p+4:(a=="Cube")?p=p+6:(a=="Octahedron")?p=p+8:(a=="Dodecahedron")?p=p+12:p=p+20;
    }
    cout<<p;
}
