#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    string s;
    cin>>s;

    int acount =0;
    int dcount =0;

    for(int i=0;i<a;i++)
    {
        
        if(s[i]=='A' || s[i]=='a')
        {
            acount++;
        }
        else if(s[i]=='D' || s[i]=='d')
        {
            dcount++;
        }
    }
    if(acount>dcount)
    {
        cout<<"Anton"<<endl;
    }
    else if(dcount>acount)
    {
        cout<<"Danik"<<endl;
    }
    else
    {
        cout<<"Friendship"<<endl;
    }
}