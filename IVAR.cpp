#include<bits/stdc++.h>
using namespace std;
#define ll long long int
bool cmp(const pair<string,ll> &a, 
              const pair<string,ll> &b) 
{ if(a.second==b.second) return a.first<b.first;
    return (a.second > b.second); 
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        unordered_map<string,vector<ll>> mp;
        while(n--)
        {
            string s;ll c;
            cin>>s>>c;
            if(mp[s].size()<3) mp[s].push_back(c);
            else
            {
                if(c>=mp[s][0]) 
                {
                    mp[s][2]=mp[s][1];
                    mp[s][1]=mp[s][0];
                    mp[s][0]=c;
                }
                else if(c>=mp[s][1])
                {
                    mp[s][2]=mp[s][1];
                    mp[s][1]=c;
                }
                else if(c>=mp[s][2]) mp[s][2]=c;
            }
            if(mp[s].size()==3)
            {
                sort(mp[s].begin(),mp[s].begin()+3,greater<ll>());
            }
        }
        /*for( auto i=mp.begin();i!=mp.end();i++)
        {
            cout<<i->first<<" : ";
            for(auto j=i->second.begin();j!=i->second.end() ;j++)
            {
                cout<<*j<<" ";
            }
            cout<<endl;
        }*/
        vector<pair<string,ll>> v;
        for(auto i=mp.begin();i!=mp.end();i++)
        {
            //sort(i->second.begin(),i->second.end(),greater<ll>());
            ll ans=0;int index=0;
            //cout<<i->first<<" : ";
            for(auto j=i->second.begin();j!=i->second.end() && index<3;j++,index++)
            {
                ans+=*j;
            }
            v.push_back(make_pair(i->first,ans));
            //cout<<endl;
        }
        sort(v.begin(),v.end(),cmp);
        cout<<v[0].first<<" "<<v[0].second<<endl;
    }
}