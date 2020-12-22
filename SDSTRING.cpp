#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    int l=s.length();
	    if(l&1) {cout<<-1<<endl;continue;}
	    int one=0,zero=0;
	    for(int i=0;i<l;i++)
	    {
	        if(s[i]=='1') one++;
	        else zero++;
	    }
	    int maxi=max(zero,one);
	    if(maxi==l) {cout<<-1<<endl;continue;}
	    cout<<maxi-l/2<<endl;
	}
	return 0;
}
