#include<bits/stdc++.h>
#include<list>
#include<iterator>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	int n = 0;
	int *p;
	list<int> even, odd;
	list<int> :: iterator it;
	cin>>n;
	int num[n] = {0}, ans = 0;
	for(int i = 0; i < n; ++i)
	{
		cin>>num[i];
		if(num[i] % 2 == 0)
		{
			even.push_back(num[i]);
		}
		else if(num[i] % 2 == 1)
		{
			odd.push_back(num[i]);
		}
	}
	if(even.size() == 1)
	{
		for(it = even.begin(); it != even.end(); ++it)
		{
			ans = *it;
		}
		for(int k = 0; k < n; ++k)
		{
			if(num[k] == ans)
			{
				cout<<k + 1<<"\n";
				break;
			}
		}
	}
	else if(odd.size() == 1)
	{
		for(it = odd.begin(); it != odd.end(); ++it)
		{
			ans = *it;
		}
		for(int a = 0; a < n; ++a)
		{
			if(num[a] == ans)
			{
				cout<<a + 1<<"\n";
				break;
			}
		}
	}
}

