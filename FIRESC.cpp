#include<bits/stdc++.h>
using namespace std;
void dfs(int x,vector<int> &vis,vector<vector<int>> v,int &u)
{
	vis[x]=1;
    u++;
	for(int i=0;i<v[x].size();i++)
	{
		int k=v[x][i];
		if(vis[k]==0) dfs(k,vis,v,u);
	}
}
int main()
{
    int mod=1e9+7;
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        // vertex and edges
        cin>>n>>m;
        vector<vector<int>> v(n+1);
        vector<int> vis(n+1,0);
        for(int i=0;i<m;i++)
        {
            int a,b;
            cin>>a>>b;
            v[a].push_back(b);
            v[b].push_back(a);
        }
        int ans=1;
        int cnt=0;
        for(int i=1;i<=n;i++)
        {
            if(vis[i]==0)
            {
                int u=0;
                cnt++;dfs(i,vis,v,u);
                ans=(ans%mod * u%mod)%mod;
            }
        }
        cout<<cnt<<" "<<ans<<endl;
    }
	return 0;
}