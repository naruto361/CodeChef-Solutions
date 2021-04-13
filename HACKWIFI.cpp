#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define loop1(n) for(int i=0;i<n;i++)

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        unordered_map<ll,ll> mp;
        while(n--)
        {
            ll x;cin>>x;
            mp[x]++;
        }
        ll mini=INT_MAX,maxi=INT_MIN,imin=-1,imax=-1;
        for(auto i=mp.begin();i!=mp.end();i++)
        {
            if(i->second<mini) mini=i->second;
            if(i->second>maxi) maxi=i->second;
        }
        for(auto i=mp.begin();i!=mp.end();i++)
        {
            if(i->second ==maxi)
            {
                if(i->first>=imax) imax=i->first;
            }
            if(i->second ==mini)
            {
                if(i->first >= imin) imin=i->first;
            }
        }
        ll ans=imin*imax;
        string s;
        while(ans>0)
        {
            s+=(ans%2)+'0';
            ans/=2;
        }
        reverse(s.begin(),s.end());
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='1') cout<<i+1;
        }
        cout<<endl;
    }
}