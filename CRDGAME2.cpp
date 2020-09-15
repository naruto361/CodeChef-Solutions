/* .............
   S A K S H A M
   .............
*/   
#include <bits/stdc++.h>
using namespace std;
#define yes cout<<"yes\n";
#define no cout<<"no\n";
#define YES cout<<"YES\n";
#define NO cout<<"NO\n";
#define ll long long int
#define pb push_back
#define mod 1000000007
#define nl cout<<"\n";
#define ff first
#define ss second
#define loop1(m) for(int i=0;i<m;i++) 
#define vl vector<ll> 
#define vll vector<ll,ll>
#define vc vector<char>
#define msi map<string,int>
#define loop2(n,m) for(auto i=n;i<=m;i++)
#define count1s(n) __builtin_popcount(n)
bool psqrt(ll x) 
{   
  long double sr = sqrt(x); 
  return ((sr - floor(sr)) == 0); 
}
bool ifodd(ll n)
{
    return (n&1);
}
int lcm(int a, int b)
{
    return a / __gcd(a, b) * b;
}
bool isprime(ll n) 
{ 
    if (n <= 1)  return false; 
    if (n <= 3)  return true; 
    if (n%2 == 0 || n%3 == 0) return false; 
    for (int i=5; i*i<=n; i=i+6) 
        if (n%i == 0 || n%(i+2) == 0) 
           return false; 
    return true; 
} 
ll powerll(ll x,ll n)
{
    ll result=1;
    while(n)
    {
        if(n&1)
            result=result* x % mod;
        n=n/2;
        x=x* x % mod;
    }
    return result;
}
ll div1(ll a,ll b)
{
    return (a%mod * (powerll(b,mod-2)%mod))%mod;
}
ll sol1(ll n,ll r)
{
    ll ans=1;
    ll k=min(r,n-r);
     for(ll i=0;i<k;i++)
        {
            ans=(ans%mod *(n-i)%mod)%mod;
            ans=div1(ans,i+1);
        }
    return ans%mod;

}
int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {   
        ll n;
        cin>>n;
        ll a[n],ans;
        loop1(n) cin>>a[i];
        ll max=0,max_value=0;
        for(ll i=0;i<n;i++)
        {
            if(max<a[i])
                max=a[i];
        }
        for(ll i=0;i<n;i++)
        {
            if(max==a[i])
            max_value++;
        }
        if(n==1)
        {
            cout<<2;
            nl
            continue;
        }
        if(max_value%2!=0)
            ans=powerll(2,n)%mod;
        else
        {
            ans=powerll(2,n)%mod - ((powerll(2,n-max_value)%mod) * sol1(max_value,max_value/2)%mod)%mod;

        }
        if(ans<0)
            ans=(ans+mod)%mod;
        cout<<ans%mod;
        nl
    }
}
