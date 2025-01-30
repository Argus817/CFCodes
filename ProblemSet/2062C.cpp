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

ll opp(ll *a, ll n)
{
    ll sum=a[n-1] - a[0];
    if (sum<0)
    {
        for (ll i = 0; i < n/2; i++) {
            swap(a[i], a[n-1-i]);
        }
        sum = a[n-1] - a[0];
    }
    for (ll i = 0; i < n-1; i++) {
        a[i] = a[i+1] - a[i];
    }
    a[n-1] = 0; 
    return sum;
}

void solve()
{
    ll n, sum=0;
    cin >> n;
    ll a[n];
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }
    for (ll i = n; i > 1; i--) {
        ll x = opp(a, i);
        if (x>=sum)
            sum = x;
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
    REDIRECT
    int t;
    cin >> t;
    while (t--) execute();
    return 0;
}
