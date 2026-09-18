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

        string s;
        cin>>s;

        vector<int>freq(26,0);

        for(char c : s)
        {
            freq[c-'a']++;
        }
        int oddcount =0;
        for(int i =0;i<26;i++)
        {
            if(freq[i]%2!=0){
                oddcount++;
            }
        }

        if(oddcount<=m+1)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

        
    }
}