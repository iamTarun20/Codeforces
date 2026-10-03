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

        vector<int>a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }


        vector<int>b;
        b.push_back(a[0]);
        for(int i=1;i<n;i++)
        {
            if(a[i-1]!=a[i])
            {
                b.push_back(a[i]);
            }
        }

        if(b.size()==1)
        {
            cout<<1<<endl;
            continue;
        }

        int answer =2;
        for(int i=1;i<b.size()-1;i++)
        {
            int left = b[i]-b[i-1];
            int right = b[i+1]-b[i];

            if((left<0 && right>0) || (left>0 && right<0)){
                answer++;
            }
        }

        cout<<answer<<endl;
    }
}