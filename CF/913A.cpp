#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	long long n = 0, m = 0;
	cin>>n>>m;
	cout<<m % pow(2, n)<<"\n";
	return 0;
}