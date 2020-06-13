#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int t;
        cin>>t;
        int a[t];
        int f[101]={0};
        for( int i=0;i<t;i++)
        {
           cin>>a[i];
           f[a[i]]++;
        }
        int maxi=*max_element(f,f+101);
        int i;int s;
        for(i=1;i<101;i++)
        {
            if(f[i]==maxi)
            {s=i;
            break;}
        }
        int count=0;
        for(int j=0;j<t;j++)
        {
            if(a[j]!=s)
            count++;
        }
        
        
        cout<<count<<endl;
       
    }
}
