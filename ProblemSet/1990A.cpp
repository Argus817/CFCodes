#include <bits/stdc++.h>
using namespace std;

int bait()
{
    int n;
    cin >> n;
    int a[n]={0};
    for (int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        a[x-1]++;
    }
    int res=0;
    for (int i=0; i<n; i++)
        res = res|(a[i]%2);
    return res;
}    
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x = bait();
        if (x)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}

