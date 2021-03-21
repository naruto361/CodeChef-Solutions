## NO TIME
### CPP SOLUTION
```cpp
int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
    int n;
    cin>>n;
    int x,h;
    cin>>x>>h;
    int a[n];
    loop1(n) cin>>a[i];
    if(x<=h) YES
    else{
        int maxi=*max_element(a,a+n);
        if(maxi+h >=x) YES
        else NO
    }
    
}
```
