#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	char board[8][8];
	int black = 0, white = 0;
	for(int i = 0; i < 8; i++)
	{
		for(int j = 0; j < 8; j++)
		{
			cin>>board[i][j];
		}
	}	
	for(int k = 0; k < 8; k++)
	{
		for(int l = 0; l < 8; l++)
		{
			if(board[k][l] >= 'a' && board[k][l] <= 'z')
			{
				if(board[k][l] == 'q')
				{
					black += 9;
				}
				else if(board[k][l] == 'r')
				{
					black += 5;
				}
				else if(board[k][l] == 'b' || board[k][l] == 'n')
				{
					black += 3;
				}
				else if(board[k][l] == 'p')
				{
					black += 1;
				}
			}
			else 
			{	
				if(board[k][l] == 'Q')
				{
					white += 9;
				}
				else if(board[k][l] == 'R')
				{
					white += 5;
				}
				else if(board[k][l] == 'B' || board[k][l] == 'N')
				{
					white += 3;
				}
				else if(board[k][l] == 'P')
				{
					white += 1;
				}
			}
		}
	}
	if(black > white)
	{
		cout<<"Black"<<"\n";
	}
	else if(black < white)
	{
		cout<<"White"<<"\n";
	}
	else
	{
		cout<<"Draw"<<"\n";
	}
	return 0;
}

