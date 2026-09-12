#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;

    int count =0;

    for(int i =1;i<s.length();i++)
    {
        if(s[i]==s[i-1])
        {
            count++;
        }
        else{
            count=0;
        }
        if(count>=6)
        {
            cout<<"YES"<<endl;
            return 0;
        }
        
    }
    cout<<"NO"<<endl;
}