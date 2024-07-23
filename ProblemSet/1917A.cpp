#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int sign(ll num)
{
    if (num>0)
        return 1;
    else if (num<0)
        return -1;
    else
        return 0;
}

void prod()
{
    int n, rsign=1;
    cin >> n;
    ll a[n];
    for (int i=0; i<n; i++)
    {
        cin >> a[i];
        rsign *= sign(a[i]);
    }
    if (rsign<=0)
        cout << 0 << endl;
    else
    {
        cout << 1 << endl;
        cout << "1 0" << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        prod();    
    return 0;
}

