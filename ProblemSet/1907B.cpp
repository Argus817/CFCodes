#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    int n = s.size();
    char seq[n];
    stack <int> u;
    stack <int> l;
    for (int i = 0; i < n; i++) 
    {
        seq[i] = s[i];
        if (seq[i] == 'b')
        {
            seq[i] = 0;
            if (!l.empty())
            {
                seq[l.top()] = 0;
                l.pop();
            }
        }
        else if (seq[i] == 'B')
        {
            seq[i] = 0;
            if (!u.empty())
            {
                seq[u.top()] = 0;
                u.pop();
            }
        }
        else 
        {
            if (seq[i] >= 'a' && seq[i] <= 'z')
                l.push(i);
            else if (seq[i] >= 'A' && seq[i] <= 'Z')
                u.push(i);
        } 
    }
    for (int i = 0; i < n; i++) 
    {
        if (seq[i] != 0)
            cout << seq[i];
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
