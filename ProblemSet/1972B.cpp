#include <bits/stdc++.h>
using namespace std;

int coingame()
{
    int n,ucount=0;
    cin >> n;
    char s[n];
    for (int i=0; i<n; i++)
        cin >> s[i];
    for (int i=0; i<n; i++)
    {
        if (s[i]=='U')
            ucount++;
    }
    return ucount%2;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        if (coingame())
            cout << "YES\n";
        else
            cout << "NO\n";
    }   
    return 0;
}

