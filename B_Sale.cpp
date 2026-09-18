#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    vector<int>arr(n);
    for(int i =0;i<n;i++)
    {
        
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());

    int maxsum =0;
    int currsum =0;

    
        for(int i=0;i<m;i++)
        {
            
            maxsum+=arr[i];

            currsum = min(currsum , maxsum);
        }
    

    if(currsum<0)
    {
        cout<<-1*currsum;
    }
    else{
        cout<<0;
    }
}