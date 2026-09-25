#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;

        vector<long long>arr(n);
        for(long long i = 0;i<n;i++)
        {
            cin>>arr[i];
        }
        
        long long k =2;

        while(true)
        {
            unordered_set<long long> st;
            for(auto it: arr)
            {
                st.insert(it%k);
            }

            if(st.size()==2)
            {
                cout<<k<<endl;
                break;
            }

            k *=2;
        }
    }
}