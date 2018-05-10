#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	int x = 0, steps = 0;
	cin>>x;
	while(x > 0)
	{
		if(x >= 5)
		{
			x = x - 5;
			steps++;
		}
		else if(x >= 4)
		{
			x = x - 4;
			steps++;
		}
		else if(x >= 3)
		{
			x = x - 3;
			steps++;
		}
		else if(x >= 2)
		{
			x = x - 2;
			steps++;
		}
		else if(x >= 1)
		{
			x = x - 1;
			steps++;
		}
	}
	cout<<steps<<"\n";
	return 0;
}
