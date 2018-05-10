#include<iostream>
using namespace std;
int main()
{
	int n = 0, m = 0, k = 0;
	cin>>n>>m>>k;
	int arr[n][n] = {0};
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			if(i == 0 && j == 0)
			{
				arr[i][j] = m;
			}
			else if(i == j)
			{
				arr[i][j] = arr[i - 1][j - 1] + k;
			}
			else if(i > j)
			{
				arr[i][j] = arr[i - 1][j] - 1;
			}
			else if(i < j)
			{
				arr[i][j] = arr[i][j - 1] - 1;
			}
		}
	}
	for(int k = 0; k < n; k++)
	{
		for(int l = 0; l < n; l++)
		{
			cout<<arr[k][l]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
