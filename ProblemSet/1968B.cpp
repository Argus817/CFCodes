#include <bits/stdc++.h>
using namespace std;

int prefix()
{
    int n,m,i=0,j=0;
    cin >> n >> m;
    string a,b;
    cin >> a >> b;
    while (i<n && j<m)
    {
        if (a[i]==b[j])
            i++;
        j++;
    }
    return i;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        cout << prefix() << endl;
    return 0;
}

