#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>m>>n;
        ll ans;
        ans=(m*(m-1))/2 *n + (n*(n-1))/2 *m;
        cout<<ans<<endl;
    }
}