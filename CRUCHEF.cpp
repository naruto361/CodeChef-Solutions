#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop1(n) for(int i=0;i<n;i++)
bool sortbysec(const pair<int,int> &a, 
              const pair<int,int> &b) 
{ 
    return (a.second > b.second); 
}
int main()
{
    
        int n;cin>>n;
        unordered_map <int,int> mp;
        int x;
        while(cin>>x)
        {
            mp[x]++;
        }
        vector<pair<int,int>> v;
        for(auto i:mp) v.push_back(i);
        sort(v.begin(),v.end(),sortbysec);
        //sort(mp.begin(),mp.end());
        int ans=INT_MAX;
        for(int i=0;i<n;i++)
        {
            ans=min(ans,v[i].second);
        }
        cout<<ans;
    
    return 0;
}