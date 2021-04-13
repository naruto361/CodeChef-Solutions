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
        string a,b;
        cin>>a>>b;
        int n;cin>>n;
        int sum1=0,sum2=0;
        int q=1;
        for(int i=0;i<a.length();i++)
        {
            sum1+=a[i];
            sum2+=b[i];
            if(abs(a[i]-b[i])>n)
            {
                q=0;break;
            }

        }
        if(q==1 && sum1==sum2) cout<<"WIN\n";
        else cout<<"LOSE\n";
    }
}