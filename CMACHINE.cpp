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
    ll f[21]={0};
    f[0]=1;f[1]=1;
    f[2]=2;f[3]=6;
    for(int i=4;i<=20;i++)
    {
        f[i]=i*f[i-1];
    }
    while(t--)
    {
        int n;
        cin>>n;
        cout<<f[n]<<endl;
    }
}