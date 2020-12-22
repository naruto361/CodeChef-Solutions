#include <bits/stdc++.h>
using namespace std;

int main()
{
    int d1,v1,d2,v2,p;
    cin>>d1>>v1>>d2>>v2>>p;
    int sum=0;
    int i=1;
    while(1)
    {
        if(d1<=i)
            sum+=v1;
        if(d2<=i)
            sum+=v2;
        if(sum>=p) break;
        i++;
    }
    cout<<i;
    
}
