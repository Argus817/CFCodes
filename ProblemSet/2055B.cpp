#include <bits/stdc++.h>
using namespace std;

int mod(int x)
{
    if (x>0)
        return x;
    else {
        return -x;
    }
}

int solve()
{
    int n;
    cin >> n;
    int a[n];
    int b[n];
    int negdiff = -1, minposdiff = -1, less=0;
    for (int i = 0; i < n; i++) 
    {
        cin >> a[i];    
    }
    for (int i = 0; i < n; i++) 
    {
        cin >> b[i];    
    }
    for (int i = 0; i < n; i++) 
    {
        if (a[i] < b[i])
        {
            less++;
            negdiff = b[i] - a[i];
        }
        else 
        {
            int diff = a[i] - b[i];
            if (minposdiff == -1)
                minposdiff = diff;
            else if (minposdiff > diff)
                minposdiff = diff;
        }
    }
    if (less > 1)
        return 0;
    if (negdiff > minposdiff)
        return 0;
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
