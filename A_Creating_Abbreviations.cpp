
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,m;
        cin>>n>>m;

        unordered_set<char>st;

        for(int i=0;i<n;i++)
        {
            string s;
            cin>>s;
            st.insert(s[0]);
        }

        bool possible = true;

        for(int i=0;i<m;i++)
        {
            string s;
            cin>>s;

            for(int j=0;j<s.size();j++)
            {
                s[j] = tolower(s[j]);
            }

            for(int j=0;j<s.size();j++)
            {
                if(st.find(s[j]) == st.end())
                {
                    possible = false;
                    break;
                }
            }
        }

        if(possible)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
