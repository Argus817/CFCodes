#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int battery()
{
    ll n,f,a,b;
    cin >> n >> f >> a >> b;
    ll m[n];
    for (ll i=0; i<n; i++)
        cin >> m[i];
    if (m[0]*a<b)
        f -= m[0]*a;
    else
        f -= b;
    if (f<=0)
        return 0;
    for (ll i=1; i<n; i++)
    {
        if (f<=0)
            return 0;
        if ( (m[i]-m[i-1])*a<b )
            f -= (m[i]-m[i-1])*a;
        else
            f -= b;
    }
    if (f<=0) return 0;
    return 1;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        if (battery())
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}

