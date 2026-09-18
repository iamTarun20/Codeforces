#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;

    if(s[0]!='-')
    {
        cout<<s<<endl;
    }
    else{
        string x = s.substr(0 , s.size()-1);
        string y = s.substr(0,s.size()-2) + s.back();

        cout<<max(stoll(x),stoll(y))<<endl;
    }
    
}
