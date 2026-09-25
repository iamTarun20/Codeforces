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

        vector<char>s(n);

        for(int i=0;i<n;i++)
        {
            cin>>s[i];
        }

        int left =0;
        int right = n-1;

        while(left<right)
        {
            if((s[left]=='0' && s[right]=='1') || (s[left]=='1'&&s[right]=='0'))
            {
                left++;
                right--;
            }
            else{
                break;
            }
        }

        cout<<(right-left+1)<<endl;
    }
}