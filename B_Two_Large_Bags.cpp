#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        vector<int>cnt(2*n+5,0);

        for(int i =0;i<n;i++)
        {
            int x;
            cin>>x;
            cnt[x]++;
        }

        bool possible = true;
        for(int i =1;i<=2*n;i++)
        {
            if(cnt[i]==1)
            {
                possible = false;
                break;
            }
            else if(cnt[i]>2)
            {
                cnt[i+1]+=cnt[i]-2;
                cnt[i] =2;
            }
        }
        if(possible)
        {
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
}