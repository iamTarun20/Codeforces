#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,n,w;
    cin>>k>>n>>w;

    int total =0;

    for(int i=0;i<w;i++)
    {
        total+=(i+1)*k;
    }


    int toborrow = total-n;

    if(toborrow>0)
    {
        cout<<toborrow<<endl;
    }
    else
    {
        cout<<0<<endl;
    }
}