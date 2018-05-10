#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	int arr[5][5] = {0}, ops = 0;
	int x = 0, y = 0;
	for(int i = 1; i <= 5; i++)
	{
		for(int j = 1; j <= 5; j++)
		{
			cin>>arr[i][j];
			if(arr[i][j] == 1)
			{
				x = i;
				y = j;
				break;
			}
		}
	}
	while(x != 3 && y != 3)
	{
		if(x > 3 && y > 3)
		{
			x = x - 1;
			y = y - 1;
			ops = ops + 2;
		}
		else if(x < 3 && y < 3)
		{
			x = x + 1;
			y = y + 1;
			ops = ops + 2;
		}
		else if (y > 3 && x < 3)
		{
			y = y - 1;
			x = x + 1;
			ops = ops + 2;
		}
		else if(y < 3 && x > 3)
		{
			y = y + 1;
			x = x - 1;
			ops = ops + 2;
		}
		else if(x == y && x > 3)
		{
			x = x - 1;
			y = y - 1;
			ops = ops + 2;
		}
		else if(x == y && x < 3)
		{
			x = x + 1;
			y = y + 1;
			ops = ops + 2;
		}
		if(x == 3 && y == 3)
		{
			break;
		}
	}
	cout<<ops<<"\n";
	return 0;
}
