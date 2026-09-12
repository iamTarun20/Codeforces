#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k;
    cin>>k;
    vector<int>arr(k);
    for(int i=0;i<k;i++)
    {
        cin>>arr[i];
    }

    sort(arr.begin(),arr.end());
    for(int i=0;i<k;i++)
    {
        cout<<arr[i]<<" ";
    }
}