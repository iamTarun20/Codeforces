#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n ;
        string s;

        cin>>n>>s;

        int ones =0;
        int ans = 0;
        if(s[0]=='1')
        {
            
            for(int i =1;i<n;i++)
            {
                if(s[i]=='0')
                {
                    ans++;
                }
            }

            cout<<ans<<endl;
            continue;
        }

        
            int firstone =-1;

            for(int i =0;i<n;i++)
            {
                if(s[i]=='1')
                {
                    firstone = i;
                    break;
                }
            }

            if(firstone==-1)
            {
                cout<<0<<endl;
                continue;
            }

            int oneleft = 0;
            int zeroright = 0;

            for(int i = firstone;i<n;i++)
            {
                if(s[i]=='0')
                {
                    zeroright++;
                }
            }
            for(int i =0;i<firstone;i++)
            {
                if(s[i]=='1')
                {
                    oneleft++;
                }
            }
            ans = oneleft+zeroright;

            for(int k = firstone;k<n;k++)
            {
                if(s[k]=='1')
                {
                    oneleft++;
                }
                else{
                    zeroright--;
                }

                ans= min(ans , oneleft+zeroright);
            }

            cout<<ans<<endl;

        

    }
}