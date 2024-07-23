#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int diagonals()
{
    int n,k;
    cin >> n >> k;
    if (k==0)
        return 0;
    int tot = 2*n -1;
    if (k<=n)
        return 1;
    k -= n;
    for (int i=2; i<=tot; i++)
    {
        int occ = n- (i/2);
        if (k<=occ)
            return i;
        k -= occ;
    }
    return tot;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        cout << diagonals() << endl;
    return 0;
}

