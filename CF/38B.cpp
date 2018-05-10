#include<iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    string coord1, coord2;
    int pos = 64;
    int x1 = 0, y1 = 0, x2 = 0, y2 = 0;
    cin>>coord1;
    cin>>coord2;
    x1 = int(coord1[0]) - int('a');
    y1 = int('8') - int(coord1[1]);
    x2 = int(coord2[0]) - int('a');
    y2 = int('8') - int(coord2[1]);
    if(x2 > 1 && x2 < 6)
    {
        cout<<pos - 15 - 9<<"\n";
    }
    else if(x2 == 1 || x2 == 6 || x2 == 0 || x2 == 7)
    {
        cout<<pos - 15 - 5<<"\n";
    }
    return 0;
}