#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	int n = 0, k = 0, cnt = 0;
	cin>>n>>k;
	for(int i = 1; i <= n; i++)
	{
		if(k % i == 0 && k / i <= n)
		{
			cnt++;
		}
	}
	cout<<cnt<<"\n";
	return 0;
}
