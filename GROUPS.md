## GROUPS
```cpp
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
        int ones=0;
        loop1(s.length())
        {
            if(s[i]=='1') ones++;
        }
        if(ones<2) cout<<ones<<endl;
        else{
            int ans=0;
            if(s[0]=='1') ans++;
            for(int i=1;i<s.length();i++)
            {
                if(s[i]=='1' && s[i-1]=='0') ans++;
            }
        cout<<ans<<endl;
        }
    }
}
```
