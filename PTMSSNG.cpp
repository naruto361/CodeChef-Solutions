#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int s=4*n-1;
        ll a[s],b[s];
        for(int i=0;i<s;i++)
        {
            cin>>a[i]>>b[i];
        }
        ll x=0,y=0;
        for(int i=0;i<s;i++)
        {
            x=(a[i]^x);
            y=(b[i]^y);
        }
        
        cout<<x<<" "<<y;
        cout<<endl;
    }
}
