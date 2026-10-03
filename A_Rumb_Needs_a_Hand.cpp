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
        vector<int>arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }

        vector<int>sorted = arr;

        sort(sorted.begin(),sorted.end());
        vector<int> idx;

        for(int i=0;i<n;i++)
        {
            if(arr[i]!=sorted[i])
            {
                idx.push_back(i);
            }
        }

        bool possible = true;

        int l =0;
        int r = idx.size()-1;

        while(l<r)
        {
            if((arr[idx[l]]!=sorted[idx[r]]) || (arr[idx[r]]!=sorted[idx[l]]))
            {
                possible = false;
            }

            l++;
            r--;
        }

        if(possible)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
}