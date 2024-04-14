#include <bits/stdc++.h>
using namespace std;

int arrzero()
{
    int n;
    cin >> n;
    int a[n];
    for (int i=0; i<n; i++)
        cin >> a[i];  
    for (int i=0; i<n-2; i++)
    {
        if (a[i]<0)
            return 0;
        int fac = a[i];
        a[i] -= fac;
        a[i+1] -= 2*fac;
        a[i+2] -= fac;
    }
    if (a[n-2]==0 && a[n-1]==0)
        return 1;
    else
        return 0;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x = arrzero();
        if (x)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}

