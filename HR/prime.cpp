#include<bits/stdc++.h>
using namespace std;

vector<long long>isprime(3001 , true);
vector<long long>prime;
vector<long long>SPF(3001);

int sieve(int n)
{
    isprime[0] = isprime[1] = false ;

    for (long long int i = 2; i < 3001; i++)
    {
        if (isprime[i])
        {
            prime.push_back(i);
            SPF[i] = i;
        }

        for (long long int j=0; j < (int)prime.size() && i*prime[j] < 3001 && prime[j] <= SPF[i]; j++)
        {
            isprime[i*prime[j]]=false;
            SPF[i*prime[j]] = prime[j] ;
        }
    }
    int ans = prime.at(n - 1);
    return ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t = -1;
    vector<int> q;
    vector<int>::iterator i;
    while(t != 0)
    {
        cin>>t;
        q.push_back(t);
    }
    for(i = q.begin(); i != q.end() - 1; ++i)
    {
        int fin = sieve(*i);
        cout<<fin<<"\n";
    }
    return 0;
}