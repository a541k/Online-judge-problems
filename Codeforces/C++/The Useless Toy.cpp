#include<iostream>
using namespace std;
main()
{
    char s,e,cck,ck;
    long long n,i;
    cin>>s>>e>>n;
    if(n%4==1)
    {
        if(s=='^'&& e=='<')
            cout<<"ccw";
        if(s=='<'&& e=='v')
            cout<<"ccw";
        if(s=='v'&& e=='>')
            cout<<"ccw";
        if(s=='>'&& e=='^')
            cout<<"ccw";
        if(s=='^'&& e=='>')
            cout<<"cw";
        if(s=='>'&& e=='v')
            cout<<"cw";
        if(s=='v'&& e=='<')
            cout<<"cw";
        if(s=='<'&& e=='^')
            cout<<"cw";
    }
    if(n%4==3)
    {
        if(s=='^'&& e=='<')
            cout<<"cw";
        if(s=='<'&& e=='v')
            cout<<"cw";
        if(s=='v'&& e=='>')
            cout<<"cw";
        if(s=='>'&& e=='^')
            cout<<"cw";
        if(s=='^'&& e=='>')
            cout<<"ccw";
        if(s=='>'&& e=='v')
            cout<<"ccw";
        if(s=='v'&& e=='<')
            cout<<"ccw";
        if(s=='<'&& e=='^')
            cout<<"ccw";
    }
    if(n%4==2||n%4==0)
        cout<<"undefined";




}
