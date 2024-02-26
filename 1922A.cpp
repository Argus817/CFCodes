#include <bits/stdc++.h>
using namespace std;
#define pb push_back

int trickytemplate()
{
    int n;
    vector <int> cflag;
    string a,b,c;
    cin >> n >> a >> b >> c;
    for (int i=0; i<n; i++)
    {
        if ((a[i]==b[i] && b[i]==c[i]) || (b[i]==c[i] && b[i]!=a[i]) || (a[i]==c[i] && a[i]!=b[i]))
            cflag.pb(0);
        else 
            cflag.pb(1);
    }
    for (int i=0; i<n; i++)
    {
        if (cflag[i]==1) return 1;
    }
    return 0;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        if (trickytemplate()) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}

