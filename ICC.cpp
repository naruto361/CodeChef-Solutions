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
        char ans;
        map<char,int> mp;
        mp[s[0]]++;
        for(int i=1;i<s.length();i++)
        {
            if(s[i]==s[i-1]) 
            {
                mp[s[i]]++;
                
            }
            else{
                mp[s[i]]=1;
                
            }
            best=max(best,mp[s[i]]);
                if(best==mp[s[i]])
                    ans=s[i];

        }
        cout<<best<<" "<<ans<<endl;
    }
    return 0;
}