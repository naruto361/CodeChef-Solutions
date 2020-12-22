#include <bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        int c=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]<=9 || a[i]>=80) c++;
            
        }
        ll ans=0;
        ans=c/k;
        if(c%k!=0) ans++;
        ans+=(n-c)/k;
        if((n-c)%k!=0) ans++;
        cout<<ans<<endl;
    }
    
}
