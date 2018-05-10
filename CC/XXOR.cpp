#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    long n = 0, q = 0;
    long x[pow(2, 31)];
    long init = pow(2, 31);
    for(long y = 1; y <= pow(2, 31); ++y)
    {
        x[y] = init;
        init--;
    } 
    cin>>n>>q;
    long nums[n];
    for(long i = 0; i < n; ++i)
    {
        cin>>nums[i];
    }
    for(long j = 0; j < q; ++j)
    {
        long l = 0, r = 0;
        long sol[pow(2, 31)];
        cin>>l>>r;
        long ans = 0;
        for(int k = l; k <= r; ++k)
        {
            ans = ans + 
        }
    }
}