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
    int n;
    cin >> n;
    vector <int> l = {1,1,2,3};
    vector <int> r = {1,2};
    int val = 35;
    for (int i = 6; i < n; i++) {
        if (val%10 == 0)
            l.pb(val/10);
        else 
            r.pb(val/10);
        val += 5;
    }
    for (auto i : l)
        cout << i << sp;
    for (auto i : r)
        cout << i << sp;
    cout << endl;
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
