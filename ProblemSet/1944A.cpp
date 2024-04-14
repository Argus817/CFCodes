#include <bits/stdc++.h>
using namespace std;

int bridges()
{
    int n,k;
    cin >> n >> k;
    if (k<n-1)
        return n;
    else
        return 1;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
       cout << bridges() << endl; 
    return 0;
}

