#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);

    bool space =false;

    for(int i =0;i<s.length();i++)
    {
        if(i+2<s.length() && s[i]=='W' && s[i+1]=='U' && s[i+2]=='B')
        {
            if(space)
            {
                cout<<" ";
                space =false;
            }
            i+=2;
        }
        else
        {
            cout<<s[i];
            space =true;
        }
    }
}