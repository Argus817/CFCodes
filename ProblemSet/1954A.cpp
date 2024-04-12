#include <bits/stdc++.h>
using namespace std;

int ribbon()
{
    int n,m,k;
    cin >> n >> m >> k;
    if (m==1)
        return 0;
    if (n-((n*1.0/m) +1)>=k) 
        return 1;
    return 0;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x = ribbon();
        if (x) 
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
