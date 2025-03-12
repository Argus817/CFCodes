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

ll power(ll base, ll power);
ll mod_power(ll base, ll power, ll mod);
ll mod_inv(ll n, ll prime); //prime=modulo

int solve()
{
    int n;
    cin >> n;
    int a[1001] = {0};
    for (int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        a[x]++;
    }
    for (int i=0; i<1001; i++)
    {
        if (a[i] == 0)
            continue;

        if (a[i] == 1)
            return 0;

        if (a[i] == 2)
            continue;

        a[i+1] += a[i] - 2;
        a[i] = 2;
    }
    return 1;
}

void execute()
{
   
    int x = solve();
    if (x)
        cout << "YES\n";
    else 
        cout << "NO\n";
    

    /*
    solve();
    */
}

int main()
{
    REDIRECT
    int t;
    cin >> t;
    while (t--) 
    {
        cerr << "Test Case " << t+1 << ":" << ERREND;
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
