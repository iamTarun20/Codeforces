#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k;
    cin>>k;
    k++;

    while(k--){
        string s;
        getline(cin ,s);

        int k = s.length();

        if(k>10)
        {
        char start = s[0];
        char end = s[k-1];

        cout<<start<<k-2<<end<<endl;
        
        }
        else{
        cout<<s<<endl;
        }
    }


    
}