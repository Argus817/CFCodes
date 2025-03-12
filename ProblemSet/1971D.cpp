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

void solve()
{
    string s;
    cin >> s;
    int count=0, flag=0;
    for (int i=1; i<s.length(); i++)
    {
        if (s[i-1] == '1' && s[i] == '0')
            count++;
        else if (s[i-1] == '0' && s[i] == '1')
        {
            if (flag==0)
                flag = 1;
            else
                count++;
        }
    }
    cout << count+1 << endl;
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
