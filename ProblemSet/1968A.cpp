#include <bits/stdc++.h>
using namespace std;

int gcd(int x, int y)
{
    if (y==0)
        return x;
    else
        return gcd(y, x%y);
}

int maximise()
{
    int x;
    cin >> x;
    int maxy = 1;
    int maxf = gcd(x,1) + 1;
    for (int y=1; y<x; y++)
    {
        int f = gcd(x,y) + y;
        if (f>maxf)
        {
            maxf = f;
            maxy = y;
        }
    }
    return maxy;

}

int main()
{
    int t;
    cin >> t;
    while (t--)
        cout << maximise() << endl;
    return 0;
}

