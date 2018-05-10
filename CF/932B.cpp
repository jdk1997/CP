#include<iostream>
using namespace std;

int product(long x)
{
    long prod = 1; 
    while(x)
    {
        int z = x % 10;
        if(z != 0)
            prod = prod * z;
        else
            ;
        x = x / 10;
    }
    return prod;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long t = 0;
    cin>>t;
    for(int i = 0; i < t; ++i)
    {
        long l = 0, r = 0, k = 0;
        int cnt = 0;
        cin>>l>>r>>k;
        for(long j = l; j <= r; ++j)
        {
            long ans = product(j);
            while(ans >= k)
            {
                ans = product(j);
                if(ans == k)
                {
                    cnt++;
                } 
            }
        }
        cout<<cnt<<"\n";
    }
    return 0;
}