#include <bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        ll ans;
        if(n>m) swap(n,m);
        if(n==1 ) ans=m/2 +m%2 ;
        else if(n%2==0) 
            ans=m*(n/2);
        else if(n%2==1 && m%2==0)
        {
            ans=n*(m/2);
        }
        else
        {
            ans=(n*m)/2+1;
        }
        
        cout<<ans<<endl;
    }
    
}
