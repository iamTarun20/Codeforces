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

        vector<int> a(n);

        int zerocount =0;

        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(i!=0 && i!=n-1 && a[i] == 0)
                zerocount++;
        }

        int moves =0;
        if(a[0]!=0)
            moves++;

        if(a[n-1]!=0)
            moves++;

        if(zerocount>=moves)
        {
            cout<<moves<<endl;
        }
        else{
            cout<<-1<<endl;
        }
        


    }
}