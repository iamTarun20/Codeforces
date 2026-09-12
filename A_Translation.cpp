#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s1;
    getline(cin,s1);
    string s2;
    getline(cin,s2);

    string s3;

    for(int i =s2.length()-1;i>=0;i--)
    {
        s3+=s2[i];
    }

    if(s3==s1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    

    

}