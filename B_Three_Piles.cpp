#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b,c;
        cin>>a>>b>>c;


        long long ans = abs(a-b);

        ans = max(ans , (a+c - b));

        cout<<ans<<endl;
    }
}