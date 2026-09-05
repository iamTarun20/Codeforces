#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    unordered_set<char> st;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            st.insert(s[i]);
        }
    }
    if(st.size()%2==0)
    {
        cout<<"CHAT WITH HER!"<<endl;
    }
    else
    {
        cout<<"IGNORE HIM!"<<endl;
    }

}