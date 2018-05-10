#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	int n = 0, in = 0, out = 0, cap = 0, max = 0;
	cin>>n;
	for(int i = 0; i < n; i++)
	{
		cin>>out>>in;
		cap = cap + in - out;
		if(cap > max)
		{
			max = cap;
		}
	}
	cout<<max<<"\n";
	return 0;
}
