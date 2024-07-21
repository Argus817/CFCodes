#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define a(i) (a[(i)-1])
#define c(i) (c[(i)-1])

ll monk()
{
    ll n,k,res=0,max=0;
    cin >> n >> k;
    vector<ll> a;
    for (int i=0; i<k; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }
    sort(a.begin(), a.end());
    for (int i=0; i<k-1; i++)
        res += 2*a[i]-1;
    return res;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        cout << monk() << endl;
    return 0;
}

