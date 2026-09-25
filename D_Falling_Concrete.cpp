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

        vector<long long>arr(n);

        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }

        vector<long long>pref(n);
        for(int i =0;i<n;i++)
        {
            pref[i] = arr[i]-i;
        }

        sort(pref.begin(),pref.end());

        int length = 1;
        int ans = 1;

        for(int i =1;i<n;i++)
        {
            if(pref[i]==pref[i-1]+1)
            {
                length++;
            }
            else if(pref[i]!=pref[i-1])
            {
                length=1;
            }
            ans = max(ans , length);
        }
        cout<<ans<<endl;
    }
}