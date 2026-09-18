#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n,m;
    cin>>n>>m;

    int intersection = n*m;
    bool flag = true;

    while(n!=0 && m!=0)
    {
        n--;
        m--;
        if(flag)
        {
            flag = false;
        }
        else{
            flag = true;
        }
    }

    if(!flag)
    {
        cout<<"Akshat"<<endl;
    }
    else{
        cout<<"Malvika"<<endl;
    }
    
}