#include <bits/stdc++.h>
using namespace std;

long long int Shuffle()
{
    long long int n;
    cin >> n;
    return pow(2,floor(log2(n)));
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        cout << Shuffle() << endl;
    return 0;
}