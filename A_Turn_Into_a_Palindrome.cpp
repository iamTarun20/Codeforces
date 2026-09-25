#include<bits/stdc++.h>
using namespace std;
bool ispalin(string s ,int n)
{
    stack<char>st;

    for(int i =0;i<n;i++)
    {
        st.push(s[i]);
    }

    int index =0;
    while(!st.empty())
    {
        if(st.top()!=s[index])
        {
            return false;
        }
        st.pop();
        index++;
    }

    return true;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        char c;
        cin>>n>>c;

        string s;
        cin>>s;

        int ans =0;

        if(ispalin(s , n))
        {
            cout<<ans<<endl;
        }
        else{
            int l =0;
            int r =n-1;

            while(l<r)
            {
                if(s[l]!=s[r])
                {
                    if(s[l]!=c)
                    {
                        ans++;
                    }
                    if(s[r]!=c)
                    {
                        ans++;
                    }
                }

                l++;
                r--;
            }
            cout<<ans<<endl;
        }

    }
}