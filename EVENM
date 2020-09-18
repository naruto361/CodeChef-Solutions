#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;int k=1;
        int a[n+1][n+1];
        for(int i=1;i<=n;i++)
        {   if(i%2!=0){
            for(int j=1;j<=n;j++)
            {   
                a[i][j]=k++;
            }}
            else
            {   
                for(int j=n;j>=1;j--)
                {   
                    a[i][j]=k++;
                }
            }
        }    
            for(int i=1;i<=n;i++)
            {
                for(int j=1;j<=n;j++)
                cout<<a[i][j]<<" ";
                cout<<endl;
            }
        
    }
}
