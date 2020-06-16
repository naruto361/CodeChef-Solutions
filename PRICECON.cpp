
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int a[n];
        int s=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]>m)
            s+=a[i]-m;
            
        }
        cout<<s<<endl;
    }
}
