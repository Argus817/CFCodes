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

void solve()
{
    int n,m,k;
    cin >> n >> m >> k;
    int a[m], q[k];
    for (int i = 0; i < m; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < k; i++) {
        cin >> q[i];
    }
    if (k==n)
    {
        for (int i = 0; i < m; i++) {
            cout << 1;
        }
    }
    else if (k==n-1)
    {
        int unknown;
        for (int i = 1; i < n; i++) {
            if (binary_search(q, q+k, i))
                continue;
            else {
                unknown = i;
                break;
            }
        }
        for (int i = 0; i < m; i++) {
            if (a[i] == unknown)
                cout << 1;
            else 
                cout << 0;
        }
    }
    else 
    {
        for (int i = 0; i < m; i++) {
            cout << 0;
        }
    }
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
