#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define sp ' '
#define mod(x) (((x)>0)? (x) : -(x))

int string_check(string s, ll *a, ll n)
{
    if (n!=s.length())
        return 0;
    map <ll, char> func1;
    map <char, ll> func2;
    for (ll i = 0; i < n; i++) {
        if (func1.find(a[i]) == func1.end())
            func1[a[i]] = s[i];
        else if (func1[a[i]] != s[i])
            return 0;
    }
    for (ll i = 0; i < n; i++) {
        if (func2.find(s[i]) == func2.end())
            func2[s[i]] = a[i];
        else if (func2[s[i]] != a[i])
            return 0;
    }
    return 1;
}

void solve()
{
    ll n;
    cin >> n;
    ll a[n];
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }
    ll m;
    cin >> m;
    string s[m];
    for (ll i = 0; i < m; i++) {
        cin >> s[i];
    }
    for (ll i = 0; i < m; i++) {
        if (string_check(s[i], a, n))
            cout << "YES\n";
        else 
            cout << "NO\n";
    } 
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
