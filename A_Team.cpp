#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int ans=0;
    while(n--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        

        if(a==1 && b==1 && c==1)
        {
            ans++;
        }
        else if(a==1 && b==1 && c==0)
        {
            ans++;
        }
        else if(a==1 && b==0 && c==1)
        {
            ans++;
        }
        else if(a==0 && b==1 && c==1)
        {
            ans++;
        }
        
    }
    cout<<ans<<endl;
}