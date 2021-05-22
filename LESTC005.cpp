
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
long long power(int n,int p)
{
    if(p==0) return 1;
    if(p%2==0)
    {
        long long ret = power(n,p/2);
        return ((ret%mod)*(ret%mod))%mod;
    }
    else return ((n%mod)*(power(n,p-1)%mod))%mod;
}
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
ll inverse(ll i){
    if(i==1) return 1;
    return (mod - ((mod/i)*inverse(mod%i))%mod+mod)%mod;
}
int binomialCoeff(int n, int k) 
{ 
    int res = 1; 
    if (k > n - k) 
    k = n - k; 
    for (int i = 0; i < k; ++i) 
    { 
        res *= (n - i); 
        res /= (i + 1); 
    } 
      
    return res; 
} 

//************** CODE ***************

int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
    int m,n;cin>>m>>n;
    int matrix[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++) cin>>matrix[i][j];
    }
    int dp[300+1][300+1]={0};
        for(int i=0;i<m;i++) dp[i][0]=1-matrix[i][0];
        for(int j=0;j<n;j++) dp[0][j]=1-matrix[0][j];
        int maxi=0;
        for(int i=1;i<m;i++)
        {
            for(int j=1;j<n;j++)
            {
                if(matrix[i][j]==0)
                    dp[i][j]=1+min(dp[i-1][j-1],min(dp[i-1][j],dp[i][j-1]));
                maxi=max(maxi,dp[i][j]);
            }
        }
        for(int i=0;i<m;i++) maxi=max(maxi,dp[i][0]);
        for(int j=0;j<n;j++) maxi=max(maxi,dp[0][j]);
        cout<< maxi*maxi;
    return 0;
}
