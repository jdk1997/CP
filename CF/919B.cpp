#include<iostream>
#include<string>
using namespace std;
int sum(int num)
{
    int tot = 0;
    while(num)
    {
        tot += num % 10;
        num = num / 10;
        if(tot > 10)
        return tot;
    }
    return tot;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int k = 0;
    cin>>k;
    int nums[10005];
    int m = 0;
    for(int i = 19; i < 100000000; i += 9)
    {
        if(sum(i) == 10)
        {
            nums[m++] = i;
            if(m > 10001)
                break;
        }
    }
    cout<<nums[k - 1]<<endl;
    return 0;
}