#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#define REDIRECT freopen("error", "w", stderr);
#else 
#define REDIRECT  
#endif
#define ERREND "\n  "

#define ll long long int
#define sp ' '
#define abs(x) (((x)>0)? (x) : -(x))
#define pb push_back
#define MOD 998244353

ll power(ll base, ll power);
ll mod_power(ll base, ll power, ll mod);
ll mod_inv(ll n, ll prime); //prime=modulo

int solve()
{
    int n,maxd=0;
    cin >> n;
    int p[n-1]; 
    for (int i=0; i<n-1; i++) //p[n-2] = parent of nth node
        cin >> p[i];
    int d[n] = {0}; //d[n-1] = dist of nth node from root
    for (int i=2; i<n+1; i++)
    {
        d[i-1] = d[p[i-2]-1] + 1;
        maxd = max(maxd, d[i-1]);
    }
    vector <vector <int>> lvls(maxd+1); //lvls[n] = nodes at nth level
    for (int i=1; i<n+1; i++)
    {
        lvls[d[i-1]].pb(i);
    }
    ll dpsum[maxd+1] = {0}, dp[n] = {0};
    dp[0] = 1;
    dpsum[0] = 1;
    for (int i=1; i<=maxd; i++)
    {
        for (auto node : lvls[i])
        {
            int par = p[node-2];
            if (par == 1)
            {
                dp[node-1] = 1;
            }
            else
            {
                dp[node-1] = (dpsum[d[par-1]] + MOD - dp[par-1]) % MOD;
            }
            dpsum[d[node-1]] = (dpsum[d[node-1]] + dp[node-1]) % MOD;
        }
    }/*
    for (int i=0; i<=maxd; i++)
    {
        cerr << dpsum[i] << sp;
        for (auto node : lvls[i])
        {
            cerr << node << ":" << dp[node-1] << sp;
        }
        cerr << ERREND;
    }*/
    ll sum = 0;
    for (int i=0; i<=maxd; i++)
        sum = (sum + dpsum[i]) % MOD;
    return sum;
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

    
    cout << solve() << endl;
    
}

int main()
{
    REDIRECT
    int t;
    cin >> t;
    for (int i=0; i<t; i++) 
    {
        cerr << "Test Case " << i+1 << ":" << ERREND;
        execute();
        cerr << endl;
    }
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
