#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define mod 1000000007
vector<vector<int>> v(100001);
vector<bool> vis(100001);
void dfs(int x,int &k)
{
	vis[x]=1;k++;
	for(int child:v[x])
	{
		if(vis[child]==0) dfs(child,k);
	}
}
int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        v.clear();vis.clear();
        int n,m;
        // vertex and edges
        cin>>n>>m;
        v.resize(n+1);
        vis.resize(n+1);
        for(int i=0;i<m;i++)
        {
            int a,b;
            cin>>a>>b;
            v[a].push_back(b);
            v[b].push_back(a);
        }
        ll ans=1;
        int cnt=0;
        for(int i=1;i<=n;i++)
        {
            if(vis[i]==0)
            {
                cnt++;
                int k=0;
                dfs(i,k);
                ans=(ans%mod * k%mod)%mod;
            }
        }
        cout<<cnt<<" "<<ans<<endl;
        //v.clear();
    }
	return 0;
}
