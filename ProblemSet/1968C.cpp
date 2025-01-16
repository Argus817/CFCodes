#include <bits/stdc++.h>
using namespace std;

#define sp ' '

void solve()
{
    int n;
    cin >> n;
    int x[n], a[n];
    for (int i = 1; i < n; i++) {
        cin >> x[i];
    }
    a[0] = x[1] + 1;
    for (int i = 1; i < n-1; i++) {
        for (int j = 0; 1; j++) {
            a[i] = j*a[i-1] + x[i];
            if (a[i] > x[i+1])
                break;
        }
    }
    a[n-1] = x[n-1] + a[n-2];
    for (int i = 0; i < n; i++) {
        cout << a[i] << sp;
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
    int t;
    cin >> t;
    while (t--) execute();
    return 0;
}
