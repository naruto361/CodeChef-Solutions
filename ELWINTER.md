```cpp
#include <bits/stdc++.h>
using namespace std;
#define ll             long long int
#define f1(i,a,b)      for(int i=a;i<b;i++)
#define w(t)           while(--t >= 0)
#define fast           ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define cy             cout<<"YES\n"
#define cn             cout<<"NO\n"
#define minus          cout<<"-1\n";
#define pb             push_back
#define mod            1000000007
#define fr             first
#define sc             second
#define sp             " "
#define pii            pair<int, int>
#define vii            vector<int>
#define mem(dp, val)   memset(dp, val, sizeof(dp))

void solve(){
    int n,m,que;
    cin>>n>>m>>que;
    unordered_map<int, vector<int>> mp;
    f1(i,0,m){
        int u,v;
        cin>>u>>v;
        u--;
        v--;
        mp[u].push_back(v);
        mp[v].pb(u);
    }
    int vis[n];
    mem(vis, 0);
    queue<int> q;
    while(--que >= 0){
        int type,x;
        cin>>type>>x;
        if(type == 1){
            x--;
            if(vis[x] == 1) continue;
            q.push(x);
            vis[x] = 1;
        }
        else if(type == 3){
            x--;
            if(vis[x]) cy;
            else cn;
        }
        else{
            while(x-- && q.size()){
                int sz = q.size();
                f1(j,0,sz){
                    int fr = q.front();
                    q.pop();
                    for(auto it : mp[fr]){
                        int ind = it;
                        if(vis[ind] == 0){
                            vis[ind] = 1;
                            q.push(ind);
                        }
                    }
                }
            }
        }
    }
}

int main(){
    fast
    int t=1;
    // cin>>t;
    w(t){
        solve();
    }
    return 0;
}
```
