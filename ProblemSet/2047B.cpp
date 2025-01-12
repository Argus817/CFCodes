#include <bits/stdc++.h>
using namespace std;

#define sp " "

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int min=11, max=0;
    char minc=s[0], maxc=s[0];
    map <char, int> mp;
    for (int i = 0; i < n; i++) 
    {
        if (mp.find(s[i]) != mp.end())
            mp[s[i]] += 1;
        else 
            mp[s[i]] = 1;
    }
    for (auto i = mp.begin(); i != mp.end(); i++) 
    {
        if (i->second <= min)
        {
            min = i->second;
            minc = i->first;
        }
        if (i->second > max)
        {
            max = i->second;
            maxc = i->first;
        }
    }
    for (int i = 0; i < n; i++) 
    {
        if (s[i] == minc)
        {
            s[i] = maxc;
            break;
        }
    }
    cout << s << endl;
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
