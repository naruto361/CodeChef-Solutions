#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
int main()
{
    ll t;
    cin>>t;
	while(t--)
	{
	ll n,best,worst;
	cin>>n;
	best=n,worst=1;
	ll arr[n];
	for(ll i=0;i<n;i++)	
	    cin>>arr[i]; 
	for(ll i=0;i<n;i++)
	    {
	   	vector<ll> ans(n,0);
	   	ans[i]=1;
	   	for(ll j=0;j<i;j++)
	   	    {
	   	       	if(arr[j]>arr[i])
	   	       	    ans[j]=1;
			} 
	   	    for(ll k=i+1;k<n;k++)
	   	    {
	   	      	if(arr[k]<arr[i])
	   	            ans[k]=1;
			}
			for(ll x=0;x<i;x++)
			{
				if(ans[x]==1)
				{
				    for(ll y=i;y<n;y++)
	   	            {
	   	         	    if(arr[y]<arr[x])
	   	      	            ans[y]=1;
			        }
				}
			}

			for(ll y=i+1;y<n;y++)
     		{
				if(ans[y]==1)
				{
					for(ll ah=0;ah<i;ah++)
					{
				        if(arr[y]<arr[ah])
					   	    ans[ah]=1;
					}
				}
			}
	        ll mt=count(ans.begin(),ans.end(),1);
	        worst=max(mt,worst);
	   	    best=min(mt,best);
	   	    }

	       cout<<best<<" "<<worst<<endl;
	   }

}
