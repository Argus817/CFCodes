#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    char vowel[5] = {'a', 'e', 'i', 'o', 'u'};
    int rem = n%5;
    if (n<=5)
    {
        for (int i = 0; i < n; i++) cout << vowel[i];    
    }
    else 
    {
        for (int i = 0; i < 5; i++) 
        {
            for (int j = 0; j < n/5; j++) cout << vowel[i];
            if (rem) cout << vowel[i];
            if (rem) rem--;
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
    int t;
    cin >> t;
    while (t--) execute();
    return 0;
}
