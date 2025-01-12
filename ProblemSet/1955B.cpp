#include <bits/stdc++.h>
using namespace std;

#define sp " "
#define pb push_back

int solve()
{
    int n,c,d;
    cin >> n >> c >> d;
    int inp[n*n];
    for (int i = 0; i < n*n; i++) 
    {
        cin >> inp[i];   
    }
    sort(inp, inp+(n*n));
    int a11 = inp[0];
    vector <int> sq;
    sq.pb(a11);
    int ai1 = a11 - c;
    for (int i = 0; i < n; i++) 
    {
        ai1 += c;
        int aij = ai1;
        for (int j = 0; j < n; j++) {
            if (i==0 && j==0)
            {
                aij += d;
                continue;
            }
            sq.pb(aij);
            aij += d;
        }    
    }
    sort(sq.begin(), sq.end());
    for (int i = 0; i < n*n; i++) 
    {
        if (inp[i] != sq[i])
            return 0;
    }
    return 1;
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
