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

        vector<int> arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }

        unordered_map<int,int> mp;
        for(auto it : arr)
        {
            mp[it]++;
        }

        vector<pair<int,int>>freq(mp.begin(),mp.end());
        sort(freq.begin(),freq.end(),[](const pair<int,int>& a, const pair<int,int>& b){
            return a.first>b.first;
        });

        int ans = freq[0].first;
        vector<int>answer;
        for(auto &it : freq)
        {
            int take = min(mp[ans],it.second);

            for(int i =0;i<take;i++)
            {
                answer.push_back(it.first);
                
            }
            it.second-= take;
        }
        for(auto &it : freq)
        {
            while(it.second>0)
            {
                answer.push_back(it.first);
                it.second--;
            }
        }

        for(int i =0;i<answer.size();i++)
        {
            cout<<answer[i]<<" ";
        }
        cout<<endl;
    }
}