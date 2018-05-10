#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int t = 0;
    cin>>t;
    for(int i = 0; i < t; ++i)
    {
        int n = 0, h = 0, ans = 0;
        cin>>n>>h;
        int a[n] = {0};
        for(int j = 0; j < n; ++j)
        {
            cin>>a[j];
        }
            
        int *lim = max_element(a, a + n + 1);
        for(int k = 1; k <= *lim; ++k)
        {
            int cnt = 0;
            for(int l = 0; l < n; ++l)
            {
                if(a[l] - k <= 0)
                {
                    cnt++;
                }
                else if(a[l] - k >= 1)
                {
                    cnt = cnt + ceil((float)a[l] / k);
                }
            }
            if(cnt <= h)
            {
                ans = k;
                break;
            }
        }
        if(ans > 0)
        {
            cout<<ans<<"\n";
        }
        else
        {
            cout<<*lim<<"\n";
        }
    }
    return 0;
}