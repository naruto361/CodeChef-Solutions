#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop1(n) for(int i=0;i<n;i++)

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        ll a[n];
        loop1(n) cin>>a[i];
        ll sum=a[0],best=a[0];
        for(int i=1;i<n;i++)
        { 
            sum=max(a[i],sum+a[i]);
            best=max(best,sum);
        }
        cout<<best<<endl;
    }
}