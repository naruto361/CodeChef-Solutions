#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n],b[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        for(int j=0;j<n;j++)
        cin>>b[j];
        long long int sum=0,sum1=0,sum2=0;
        for(int i=0;i<n;i++)
        {
            sum1+=a[i];
            sum2+=b[i];
            if(a[i]==b[i] && sum1==sum2)
            sum+=a[i];
        }
        cout<<sum<<endl;
    }
}
