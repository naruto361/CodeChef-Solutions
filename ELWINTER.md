```cpp
#include <bits/stdc++.h>
using namespace std;
#define yes  cout<<"yes\n";
#define no   cout<<"no\n";
#define YES  cout<<"YES\n";
#define NO   cout<<"NO\n";
#define ll   long long
#define pb   push_back
#define mod  1000000007
#define nl   cout<<'\n';
#define ff   first
#define ss   second
#define vi   vector<int>
#define vll  vector<ll>
#define vc   vector<char>
#define file_write freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
#define loop1(m)   for(int i=0;i<m;i++) 
#define loop2(n,m) for(auto i=n;i<=m;i++)
#define count1s(n) __builtin_popcount(n)
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
vi dx={0,-1,0,1};
vi dy={1,0,-1,0};
int main()
{
    int n,m,t;
    cin>>n>>m>>t;
    unordered_map<int,vi> mp;
    loop1(m)
    {
        int u,v;
        cin>>u>>v;
        u--;v--;
        mp[u].pb(v);
        mp[v].pb(u);
    }
    int vis[n]={0};
    queue<int> q;
    while(t--)
    {
        int x;cin>>x;
        if(x==1)
        {
            int k;cin>>k;
            k--;
            if(vis[k]) continue;
                vis[k]=true;
                q.push(k);
        }
        else if(x==3)
        {
            int k;cin>>k;
            k--;
            if(vis[k]) YES
            else NO
        }
        else //x==2
        {
            int time;cin>>time;
            while(time-- && q.size()>0)
            {
                int len=q.size();
                while(len--)
                {
                    int p=q.front();
                    q.pop();
                    for(auto &i:mp[p])
                    {
                        if(vis[i]) continue;
                        vis[i]=true;
                        q.push(i);
                    }
                }
            }
        }
    }
}
    
```
