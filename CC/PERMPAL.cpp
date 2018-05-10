#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 0;
    cin>>t;
    
    for(int i = 0; i < t; ++i)
    {
        string s, cmp;
        bool flg = 0;
        cin>>s;
        string samp(s.rbegin(), s.rend()); 
        if(s.compare(samp) == 0)
        {
            for(int m = 1; m <= s.length(); ++m)
                cout<<m<<" ";
            cout<<"\n";
        }
        else
        {
            int nums[s.length()];
            for(int j = 1; j <= s.length(); ++j)
            {
                nums[j] = j;
            }
            while(next_permutation(nums, nums + s.length() + 1))
            {
                string ans;
                for(int k = 1; k <= s.length(); ++k)
                {
                    ans = ans + s[nums[k] - 1];
                }
                string cmp(ans.rbegin(), ans.rend());
                if(ans.compare(cmp) == 0)
                {
                    flg = 1;
                    for(int k = 1; k <= s.length(); ++k)
                    {
                        cout<<nums[k]<<" ";
                    }
                    cout<<"\n";
                    break;
                }
            }
            if(flg == 0)
            {
                cout<<"-1"<<"\n";
            }
        }
    }
    return 0;
}