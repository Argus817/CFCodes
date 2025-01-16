#include <bits/stdc++.h>
using namespace std;

int mod(int x)
{
    if (x>=0)
        return x;
    else 
        return -x;
}

int solve()
{
    int n,a,b;
    cin >> n >> a >> b;
    return (mod(a-b)%2)==0;
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
    int t;
    cin >> t;
    while (t--) execute();
    return 0;
}
