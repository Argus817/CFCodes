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

int solve()
{
    int n;
    cin >> n;
    int b[n-2];
    for (int i = 0; i < n-2; i++) {
        cin >> b[i];
    }
    if (n<=4)
        return 1;
    for (int i = 1; i < n-3; i++) {
        if (b[i-1]==1 && b[i]==0 && b[i+1]==1)
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
    REDIRECT
    int t;
    cin >> t;
    while (t--) execute();
    return 0;
}
