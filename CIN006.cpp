
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
#define loop1(m) for(int i=0;i<m;i++) 
#define loop2(n,m) for(auto i=n;i<=m;i++)
#define count1s(n) __builtin_popcount(n)
bool psqrt(ll x) 
{   
  long double sr = sqrt(x); 
  return ((sr - floor(sr)) == 0); 
}
int lcm(int a, int b)
{
    return a / __gcd(a, b) * b;
}
bool sortbysec(const pair<int,int> &a, 
              const pair<int,int> &b) 
{ 
    return (a.second < b.second); 
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
int countdigits(ll n)
{
	return floor(log10(n)+1);
}

int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
    
    
    int t;
    cin>>t;
    while(t--)
    {
        ll a,r,z;
        cin>>a>>r>>z;
        ll ans=0;
        ll maxi=(a+r)/z;
        cout<<maxi<<" ";
        if(a%z==0 || r%z==0) ans=0;
        else if(maxi==0) ans=0;
        else{
            if((a%z==0) ^ (r%z==0))
            {
                if(r%z==0) swap(a,r);
                if(r<z) ans=0;
                else 
                {
                    ans=(r/z) *z;
                }
            }
            else{
                ll d1=a/z,d2=r/z;
                if(d1+d2==maxi) ans=0;
                else{
                    if(a<r) swap(a,r);
                    ll r1=a%z,r2=r%z;
                    if(r1+r2==z) ans=min(r1,r2);
                    else{
                        ans=min(z-r1,z-r2);
                    }
                }

            }
        }
        cout<<ans;
        nl

    }
}
