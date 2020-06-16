#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int ans=0;
        for(int i=0;i<s.length()-1;i++)
        {
            if((s[i]=='x'&& s[i+1]=='y') || (s[i]=='y' && s[i+1]=='x'))
            {
                ans++;
                i++;
            }
        }
        cout<<ans<<endl;
    }
}
