#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop1(n) for(int i=0;i<n;i++)
int f[10000001]={0};
int count7(int n)
{
    int ans=0;
    while(n>0)
    {
        if(n%10==7) ans++;
        n/=10;
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    for(int i=0;i<10000001;i++) f[i]=0;
    for(int i=1;i<10000001;i++)
    {
        f[i]=f[i-1]+count7(i);
    }
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        if(x==y) cout<<count7(x)<<endl;
        else{
            if(x==0) x=1;
            cout<<f[y]-f[x-1]<<endl;
        }
    }
}