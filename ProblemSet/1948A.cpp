#include <bits/stdc++.h>
using namespace std;

int spec()
{
    int n;
    cin >> n;
    if (n%2==1)
    {
        cout << "NO\n";
        return 0;
    }
    else
    {
        cout << "YES\n";
        for (int i=0; i<n/2; i++)
            cout << "AAB";
        cout << "\n";
        return 0;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        spec();
    return 0;
}