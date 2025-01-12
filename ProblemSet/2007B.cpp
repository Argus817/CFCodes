#include <bits/stdc++.h>
using namespace std;

#define sp " "
//#define cerr if(false)cerr

void solve()
{
    int n,m;
    cin >> n >> m;
    int max = 0;
    for (int i = 0; i < n; i++) 
    {
        int x;
        cin >> x;
        max = (x>max)? x : max;
    }
    for (int i = 0; i < m; i++) 
    {
        char c;
        int l,r;
        cin >> c >> l >> r;
        if (l<=max && max<=r)
        {
            if (c=='+')
                max++;
            else
                max--;
        }
        cout << max << sp;
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
