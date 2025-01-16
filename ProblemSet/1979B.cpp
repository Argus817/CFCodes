#include <bits/stdc++.h>
using namespace std;

#define sp ' '

void solve()
{
    int x,y;
    cin >> x >> y;
    int a = x^y;
    int ind = 0;
    while (a%2==0)
    {
        ind++;
        a = a >> 1;
    }
    int res = 1 << ind;
    cout << res << endl;
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
