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

ll solve()
{
    ll n,x,k, xpos=-1, zpos=-1, count=0;
    cin >> n >> x >> k;
    string s;
    cin >> s;
    ll p[n+1];
    p[0] = 0;
    for (int i=0; i<n; i++)
    {
        if (s[i] == 'L')
            p[i+1] = p[i] - 1;
        else
            p[i+1] = p[i] + 1;
    }
    for (int i=0; i<n; i++)
    {
        if (p[i+1] == -x)
        {
            xpos = (xpos==-1)? i+1 : xpos;
        }
        if (p[i+1] == 0)
            zpos = (zpos==-1)? i+1 : zpos;
        if (xpos!=-1 && zpos!=-1)
            break;
    }
    if (xpos==-1)
        return 0;

    if (k<xpos)
        return 0;
    count++;
    k -= xpos;
    if (zpos == -1)
        return count;
    count += k/zpos;
    return count;
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
