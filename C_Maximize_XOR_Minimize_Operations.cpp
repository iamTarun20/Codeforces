#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        long long x,y;
        cin>>x>>y;

        long long s = x+y;

        for(long long d = (1LL<<60);d>=1;d>>=1)
        {
            if((s&d)!=0 && x>=d)
            {
                x-=d;
            }
        }

        cout<<s<<" "<<x<<endl;
    }
}