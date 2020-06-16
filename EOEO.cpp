#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        long long int ans;
        if(n%2!=0)
        ans=n/2;
        else if(__builtin_popcount(n)==1)
        ans=0;
        else
        {
            while(n%2==0)
            n=n/2;
            ans=n/2;
        }
        cout<<ans<<endl;
        
        
        
    }
}
