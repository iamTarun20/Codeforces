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
        vector<int>arr(3);
        int mini = INT_MAX;
        for(int i=0;i<3;i++)
        {
            int k;
            cin>>k;
            arr[i] = k;

            mini = min(mini , k);
        }


        int nonpart = abs(n-mini);

        cout<<nonpart<<endl;
    }
}