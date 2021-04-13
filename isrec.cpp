#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        string s[n];
        for(int i=0;i<n;i++) cin>>s[i];
        int up=n-1,down=0;
        int left=m-1,right=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(s[i][j]=='1'){
                up=min(up,i);
                down=max(down,i);
                left=min(left,j);
                right=max(right,j);}
            }
        }
        int ans=1;
        
        for(int i=up;i<=down;i++)
        {
            int k=0;
            for(int j=left;j<=right;j++)
                if(s[i][j]!='1') {ans=0;k=1;break;}
            if(k==1) break;
        }
        if(ans) cout<<"YES\n";
        else cout<<"NO\n";
    }
}