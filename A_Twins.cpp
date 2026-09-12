#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);

    int totalsum =0;

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        totalsum+=arr[i];
    }

    sort(arr.begin(),arr.end());

    int mincoin =0;
    int sum=0;

    for(int i=n-1;i>=0;i--){
        sum+=arr[i];
        mincoin++;
        if(sum>totalsum/2)
        {
            cout<<mincoin<<endl;
            return 0;
        }
    }
    


}