#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int legs()
{
    int n;
    cin >> n;
    if (n%4==0)
        return n/4;
    else
        return n/4+1;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        cout << legs() << endl;
    return 0;
}

