
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

        long long suma = 0;
        long long sumb = 0;

        for(int i=0;i<n;i++)
        {
            int k;
            cin>>k;

            if(i == 0)
                suma = k + n - 1;
        }

        for(int i=0;i<m;i++)
        {
            int p;
            cin>>p;

            if(i == 0)
                sumb = p + m - 1;
        }

        if(suma >= sumb)
        {
            cout<<1<<endl;
        }
        else
        {
            cout<<2<<endl;
        }
    }
}
