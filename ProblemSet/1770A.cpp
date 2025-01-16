#include <bits/stdc++.h>
using namespace std;

#define sp ' '
#define ll long long int

void solve()
{
    ll n,m;
    cin >> n >> m;
    ll a[n], b[m];
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (ll i = 0; i < m; i++) {
        cin >> b[i];
    }
    for (ll i = 0; i < m; i++) {
        sort(a, a+n);
        a[0] = b[i];
    }
    ll sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
    }
    cout << sum << endl;
}

void execute()
{
    /*
    int x = solve();
    if (x)
        cout << "YES\n";
    else 
        cout << "NO\n";
    */

    
    solve();
    
}

int main()
{
    int t;
    cin >> t;
    while (t--) execute();
    return 0;
}
