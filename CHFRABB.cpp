#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop1(n) for(int i=0;i<n;i++)

int jump(vector<int>& nums) {
        if(nums.size()<2) return 0;
        int n=nums.size();
        int ans=0,maxi=0,maxindex=0;
        for(int i=0;i<n;i++)
        {
            maxi=max(maxi,i+nums[i]);
            if(maxi<=i) return -1;
            if(i==maxindex)
            {
                ans++;
                maxindex=maxi;
            }
            if(maxindex>=n-1) break;
        }
        return ans;
    }
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> nums;
        while(n--)
        {
            int x;cin>>x;
            nums.push_back(x);
        }
        cout<<jump(nums)<<endl;
    }
}