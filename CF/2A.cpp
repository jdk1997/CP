#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	int t = 0, score = 0, max = 0;
	string name = "", winner = "";
	cin>>t;
	for(int i = 0; i < t; i++)
	{
		cin>>name>>score;
		if(score > max)
		{
			max = score;
			winner = name;
		}
	}
	cout<<winner;
	return 0;
}
