#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop1(n) for(int i=0;i<n;i++)
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        ll ans=0;
        loop1(n) cin>>a[i];
        loop1(n-1)
        {
            ans+=max(0,a[i]-a[i+1]);
        }
        cout<<ans<<endl;
    }
    return 0;
}