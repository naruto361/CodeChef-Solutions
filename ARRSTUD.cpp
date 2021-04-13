#include<bits/stdc++.h>
using namespace std;
#define ll long long
int check(int x, int y, int n)
{
    int ans=0;
    int d = x / y;
    for (int i = 0; i <= n; i++) {
        if(i!=0) ans+=d;
        x = x - (y * d);
        if (x == 0)
            break;
        x = x * 10;
        d = x / y;
    }
    return ans;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int best=0;
        int ans=0;
        if(s[0]=='1') {ans=1;best=1;}
        for(int i=1;i<s.length();i++)
        {
            if(s[i]==s[i-1] && s[i]=='1')
            {
                ans++;
                best=max(best,ans);
            }
            else ans=1;
        }
        cout<<best<<endl;
    }
    return 0;
}