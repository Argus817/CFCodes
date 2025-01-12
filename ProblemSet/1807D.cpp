#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,q;
    cin >> n >> q;
    int a[n];
    int ps[n+1] = {0};
    for (int i = 0; i < n; i++) 
    {
        cin >> a[i];
        ps[i+1] = ps[i] + a[i];
    }
    while (q--)
    {
        int l,r,k;
        cin >> l >> r >> k;
        l--;
        r--; //to convert to 0 based indexing
        int sum = ps[l] - ps[0] + (r-l+1)*k + ps[n] - ps[r+1];
        if (sum%2)
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
