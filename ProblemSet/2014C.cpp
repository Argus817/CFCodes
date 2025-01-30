#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#define REDIRECT freopen("error", "w", stderr);
#else 
#define REDIRECT  
#endif

#define ll long long int
#define sp ' '
#define mod(x) (((x)>0)? (x) : -(x))
#define pb push_back

void solve()
{
    ll n, sum=0;
    cin >> n;
    ll a[n];
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }
    if (n<3)
    {
        cout << -1 << endl;
        return;
    }
    sort(a, a+n);
    ll bound = 2*n*a[n/2] - sum;
    if (bound<0)
        cout << 0 << endl;
    else 
        cout << bound+1 << endl;
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
    REDIRECT
    int t;
    cin >> t;
    while (t--) execute();
    return 0;
}
