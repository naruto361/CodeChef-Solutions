## IRSTXOR
```cpp
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
        vector<int> v;
        int x=n;
        while(x>0)
        {
            v.push_back(x%2);
            x/=2;
        }
        reverse(v.begin(),v.end());
        int l=v.size();
        ll change=0;
        loop2(1,l-1)
        {
            if(v[i]==0) v[i]=1;
            else v[i]=0;
        }
        int k=0;
        for(int i=l-1;i>=0;i--)
        {
            change+=v[i]*pow(2,k++);
        }
        ll xori=0;
        xori=change^n;
        ll ans=xori*change;
        cout<<ans<<endl;
    }
}

```
