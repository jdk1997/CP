#include<iostream>
#include<algorithm>
#include<set>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int t = 0;
    cin>>t;
    for(int i = 0; i < t; ++i)
    {
        int n = 0, cnt = 0;
        cin>>n;
        int a[n] = {0};
        for(int j = 0; j < n; ++j)
        {
            cin>>a[j];
        }
        set <int> set_a;
        set <int> :: iterator it;
        if(n == set_a.size())
        {
            cout<<"0"<<"\n";
        }
        else
        {
            for(int k = 0; k < n; ++k)
            {
                set_a.insert(a[k]);
            }
            for(it = set_a.begin(); it != set_a.end(); it++)
            {
                //int quan = count(a, a + n + 1, *it);
                if(count(a, a + n + 1, *it) > 1)
                {
                    cnt += count(a, a + n + 1, *it) - 1;
                }
            }
            cout<<cnt<<"\n";
        }
    }
    return 0;
} 