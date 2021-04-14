#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop1(n) for(int i=0;i<n;i++)

int main()
{
    
        int n,k;
        cin>>n>>k;
        unordered_map<int,int> mp;
        while(n--)
        {
            int x;
            cin>>x;
            mp[x%k]++;
        }
        int ans=0;
        for(auto i=mp.begin();i!=mp.end();i++)
        {
            if(i->second&1) ans++;
        }
        cout<<ans+1;
}