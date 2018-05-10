#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	long mon = 0, cola = 0, bar = 0;
	cin>>mon;
	cin>>cola;
	cin>>bar;
	for(int i = 0; i * cola <= mon; ++i)
		if((mon - i * cola) % bar == 0)
		{
			cout<<"YES"<<"\n";
			cout<<i<<" "<<(mon - i * cola) / bar<<"\n";
			return 0;
		}
	cout<<"NO"<<"\n";
	return 0;	
	
}
