#include <bits/stdc++.h>
using namespace std;

void query(int n, int a[])
{
    int l;
    long long int u,sections=0;
    cin >> l >> u;
    int r=l;
    long long int lastperf = 0;
    for (r=l; r<=n; r++)
    {
        sections += a[r-1];
        long long int perf = 0;
        for (auto k=0; k<sections && (u-k)>0; k++)
            perf += u-k;
        if (perf<=lastperf && r!=l) break;
        lastperf = perf;
    }
    cout << --r << " ";
}

void training()
{
    int n,q;
    cin >> n;
    int a[n];
    for (int i=0; i<n; i++)
        cin >> a[i];
    cin >> q;
    while (q--)
        query(n,a);
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        training();
    return 0;
}