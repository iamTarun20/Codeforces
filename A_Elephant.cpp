#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin>>x;
    int step =0;

    for(int i=5;i>=1;i--)
    {
        while(x>=i){
            x = x-i;
            step++;
        }
    }

    cout<<step<<endl;
}