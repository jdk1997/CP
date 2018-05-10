#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	int n = 0, m = 0;
	cin>>n>>m;
	char snake[n][m];
	bool flag = 0;
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= m; j++)
		{
			if(i % 2 == 1)
			{
				snake[i][j] = '#';
			}
			else
			{
				if((i % 2 == 0 && j < i) || (i % 2 == 0 && j > i))
				{
					snake[i][j] = '.';
				}
				else if(i % 2 == 0)
				{
					if(flag == 0)
					{
						snake[i][1] = '#';
						flag = 1;
					}
					else if(flag == 1)
					{
						snake[i][m] = '#';
						flag = 0;
					}
				}
			}
			
		}
		cout<<"\n";
	}
	for(int k = 1; k <= n; k++)
	{
		for(int l = 1; l <= m; l++)
		{
			cout<<snake[k][l];
		}
		cout<<"\n";
	}
	return 0;
}
