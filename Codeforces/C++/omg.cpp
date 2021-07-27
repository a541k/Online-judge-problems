#include<bits/stdc++.h>
#define ll long long
#define spc ' '
#define lne '\n'
using namespace std;
int main()
{
    ofstream filex("filea.txt");
    filex.close();
    ifstream filea("filea.txt");
    system("filea.txt");
    ofstream fileb("fileb.txt");
    ofstream filec("filec.txt");
    fileb << "ODD" << lne;
    filec << "EVEN" << lne;
    while( !filea.eof() ) {
        ll value;
        filea >> value;
        if(value%2)
            fileb << value << spc;
        else
            filec << value << spc;
    }
    filea.close();
    fileb.close();
    filec.close();
    system("fileb.txt");
    system("filec.txt");
    return 0;
}
