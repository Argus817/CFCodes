#include <bits/stdc++.h>
using namespace std;

long long int fireworks()
{
    long long int a,b,m;
    cin >> a >> b >> m;
    return (m/a)+(m/b)+2;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        cout << fireworks() << endl;
    return 0;
}
