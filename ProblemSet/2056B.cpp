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
    int n;
    cin >> n;
    int arr[n]; 
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            char x;
            cin >> x;
            if (i<=j) { 
                x = (x=='0')? '1' : '0';
            }
            if (x == '1')
                count++;
        }
        arr[count-1] = i+1;
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << sp;
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
    while (t--) { 
        execute();
    }
    return 0;
}
