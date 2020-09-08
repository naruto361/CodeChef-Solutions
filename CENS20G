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
int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int x,y;
        cin>>x>>y;
        int a1=0,a2=0,a3=0,a4=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='L') a1++;
            else if(s[i]=='R') a2++;
            else if(s[i]=='U') a3++;
            else a4++;
        }
        int q;
        cin>>q;
        while(q--){
        int a,b;
        cin>>a>>b;
        int k1=a-x;
        int k2=b-y;
        int l=0,r=0,u=0,d=0;
        if(k1<0) l=abs(k1);
        else r=k1;
        if(k2<0) d=abs(k2);
        else u=k2;
        int ans=1;
        
        if(a1<l || a2<r || a3<u || a4<d)
        ans=0;
        if(ans==0)
        NO
        else
        cout<<"YES "<<l+r+u+d<<endl;
        }
        nl
    }
}
