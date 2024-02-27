#include <bits/stdc++.h>
using namespace std;

int modSum()
{
    int n, sum=0;
    cin >> n;
    for (int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        if (x<0)
            sum-=x;
        else 
            sum += x;
    }
    return sum;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        cout << modSum() << endl;
    return 0;
}