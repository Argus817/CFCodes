#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#define REDIRECT freopen("error", "w", stderr);
#else 
#define REDIRECT  
#endif

#define ll long long int
#define sp ' '
#define abs(x) (((x)>0)? (x) : -(x))
#define pb push_back
#define MOD 998244353

ll power(ll base, ll power);
ll mod_power(ll base, ll power, ll mod);
ll mod_inv(ll n, ll prime); //prime=modulo

void solve()
{
    int n;
    cin >> n;
    ll dp[4] = {0};
    dp[0] = 1;
    for (int i = 0; i < n; i++) 
    {
        int x;
        cin >> x;
        if (x==1)
            dp[1] = (dp[1] + 1) % MOD;
        else if (x==2)
            dp[2] = (((2*dp[2]) % MOD) + dp[1]) % MOD;
        else if (x==3) 
            dp[3] = (dp[2] + dp[3]) % MOD;
    } 
    cout << dp[3] << endl;
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

ll power(ll base, ll power)
{
    ll res = 1;
    while (power>0)
    {
        if (power & 1)
            res = res * base;
        base *= base;
        power >>= 1;
    }
    return res;
}

ll mod_power(ll base, ll power, ll mod)
{
    ll res = 1;
    while (power>0)
    {
        if (power & 1)
            res = (res * base) % mod;
        base = (base * base) % mod;
        power >>= 1;
    }
    return res;
}

ll mod_inv(ll n, ll prime) //prime=modulo
{
    return mod_power(n, prime-2, prime);
}
