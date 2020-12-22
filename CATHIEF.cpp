#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
	int x,y,k,n;
	cin>>x>>y>>k>>n;
	if(abs(x-y)%(2*k) ==0) cout<<"Yes\n";
	else cout<<"No\n";
    }
	return 0;
}
