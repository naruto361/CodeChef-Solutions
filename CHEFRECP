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
         int f[1001]={0};
         int k=1;
        for(int i=0;i<n;i++)
       {
           cin>>a[i];
        
       }
       for(int i=0;i<n;i++){ f[a[i]]++;
           if(f[a[i]]>1 && a[i]!=a[i-1])
           {k=0;break;}
       
       }
       sort(f,f+1001);
      
       for(int i=1;i<1000;i++)
       {
           if(f[i]!=0 && (f[i]==f[i-1] || f[i]==f[i+1]))
           {k=0;break;}
       }
       if(k==1)
       cout<<"YES";
       else cout<<"NO";
       cout<<endl;
    }
    
}
