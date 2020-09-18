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
        int a[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        int a1=0,a2=0,a3=0;
        int ans=1;
        for(int i=0;i<n;i++)
        {
            if(a[i]%15==0)
            a3++;
            else if(a[i]%10==0)
            a2++;
            else
            a1++;
            
            if(a[i]==10)
            {if(a1==0)
            {
                ans=0;break;
            }
            else
            a1--;
            }
            else if(a[i]==15)
            {   if(a2==0 && a1<2)
            {   ans=0;break;}
                else if(a2>0)
                a2--;
                else if(a1>1)
                a1=a1-2;
            }
        }    
            if(ans==1)
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
        
    }
}
