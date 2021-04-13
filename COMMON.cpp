#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop1(n) for(int i=0;i<n;i++)

int main()
{
    string x,y;
    cin>>x>>y;
    int l=x.length();
    int dp[l+1][l+1]={0};
    for(int i=0;i<=l;i++)
    {
        for(int j=0;j<=l;j++)
        {
            if(i==0 || j==0) dp[i][j]=0;
            else if(x[i-1] == y[j-1]) dp[i][j]=1+dp[i-1][j-1];
            else if(x[i-1] != y[j-1])
            {
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    cout<<dp[l][l];
}