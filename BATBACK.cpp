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
        int n;cin>>n;
        int ans=0;
        
        if(n>90 ) 
        {
            ans+=(n-90)*3;
            ans+=70*6;
        } 
        if(n>20 && n<=90) ans+=(n-20)*6;
        ans+=min(n,20)*9;
        
        int hr=ans/60;
        int min=ans%60;
        if(hr<10) cout<<0;
        cout<<hr<<":";
        if(min<10) cout<<0;
        cout<<min;
        cout<<endl;
    }
}