#include <bits/stdc++.h>
using namespace std;

int points(int p, int t)
{
    return max(3*p/10, p-(p/250)*t);
}

int main()
{
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    int m = points(a,c);
    int v = points(b,d);
    if (m==v)
        cout << "Tie" << endl;
    else if (m>v)
        cout << "Misha\n";
    else
        cout << "Vasya\n";
    return 0;
}
