## SEDARR
```cpp
int main()
{
    ios_base::sync_with_stdio(false);
	  cin.tie(NULL); cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        ll a[n];
        loop1(n) cin>>a[i];
        ll sum=0;
        loop1(n)
        {
            sum+=a[i];
        }
        int ans=0;
        if(sum%k==0) ans=0;
        else ans=1;
        cout<<ans<<endl;
    }
}
```
