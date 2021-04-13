#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int f[26]={0};
        for(int i=0;i<s.length();i++)
        {
            f[s[i]-'a']++;
            if(f[s[i]-'a']==1) cout<<s[i];
        }
        cout<<endl;
    }
}