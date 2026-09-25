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

        int m = n* (n-1)/2;

        vector<int>b(m);
        for(int i =0;i<m;i++)
        {
            cin>>b[i];
        }

        sort(b.begin(),b.end());
        int index =0;

        for(int remaining =n-1;remaining>=1;remaining--)
        {
            cout<<b[index]<<" ";
            index+=remaining;
        }

        cout<<1000000000<<endl;

    }
}