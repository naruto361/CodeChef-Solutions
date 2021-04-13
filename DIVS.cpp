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
        int x,y;
        cin>>x>>y;
        cout<<check(x,y,n);
        cout<<endl;
    }
}