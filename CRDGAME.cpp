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
        cin>>a[i]>>b[i];
        int chef=0,monty=0;
        for(int i=0;i<n;i++)
        {
            int ans1=0,ans2=0;
            while(a[i]>0)
            {ans1+=a[i]%10;
            a[i]=a[i]/10;}
            while(b[i]>0)
            {ans2+=b[i]%10;
            b[i]=b[i]/10;}
            if(ans1>ans2)
            chef++;
            else if(ans1<ans2)
            monty++;
            else
            {
                monty++;
                chef++;
            }
            
        }
        if(chef>monty) cout<<0;
        else
        if(chef<monty) cout<<1;
        else
        cout<<2;
        cout<<" ";
        cout<<max(chef,monty);
        cout<<endl;
        
    }
}
