#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    vector<int> a(n);

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int target = a[k-1];

    int ans=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>=target && a[i]>0)
        {
            ans++;
        }
    }
    cout<<ans<<endl;
}