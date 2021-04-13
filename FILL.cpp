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
        int n;
        cin>>n;
        int f[n+1]={0};
        f[0]=f[1]=1;
        f[2]=5;
        f[3]=11;
        f[4]=36;
        if(n<=4) cout<<f[n]<<endl;
        else{
            for(int i=5;i<=n;i++)
            {
                f[i]=f[i-1] + 5*f[i-2] + f[i-3] - f[i-4];
            }
            cout<<f[n]<<endl;
        }
    }
}