#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,k;
        cin>>n>>k;

        vector<int> arr(n);


        for(int i =0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());

        int current = 1;
        int best = 1;

        for(int i = 1;i<n;i++)
        {
            if(arr[i]- arr[i-1]<=k)
            {
                current++;
            }
            else{
                current= 1;
            }

            best = max(best,current);
        }
        if(abs(n-best)>=0){
        cout<<n-best<<endl;
        
        }
        else{
            cout<<0<<endl;
        }
    }
}