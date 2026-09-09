#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);

    vector<char> alph;

    for(int i=0;i<s.length();i++)
    {
        if(s[i]>='1' && s[i]<='3')
        {
            alph.push_back(s[i]);
        }
    }

    sort(alph.begin(), alph.end());

    int k =0;
    while(k<alph.size()-1)
    {
        cout<<alph[k]<<"+";
        k++;
    }
    cout<<alph[k]<<endl;

    
}