#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define sp " "

void subarray()
{
    int n;
    cin >> n;
    int p[n];
    for (int i=0; i<n; i++)
        cin >> p[i];
    int q[n];
    for (int i=0; i<n; i++)
        q[(i+1)%n] = p[i];
    for (int i=0; i<n; i++)
        cout << q[i] << sp;
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        subarray();
    return 0;
}

