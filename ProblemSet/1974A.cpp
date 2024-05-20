#include <bits/stdc++.h>
using namespace std;

int desktop()
{
    int x,y,miny,leftout;
    cin >> x >> y;
    if (y%2==0)
    {
        miny = y/2;
        leftout = (15-8)*miny;
    }
    else
    {
        miny = (y/2)+1;
        leftout = 7*(miny-1)+(15-4);
    }
    if (leftout>=x)
        return miny;
    else
    {
        int xleft = x-leftout;
        if (xleft%15==0)
            return miny+xleft/15;
        else
            return miny+1+xleft/15;
    }

}

int main()
{
    int t;
    cin >> t;
    while (t--)
        cout << desktop() << endl;
    return 0;
}

