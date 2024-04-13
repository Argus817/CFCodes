#include <bits/stdc++.h>
using namespace std;

void game()
{
    int k,q;
    cin >> k >> q;
    int a[k], n[q];
    for (int i=0; i<k; i++)
        cin >> a[i];
    for (int i=0; i<q; i++)
        cin >> n[i];
    for (int i=0; i<q; i++)
    {
        if (n[i]<a[0])
            cout << n[i] << " ";
        else
            cout << a[0]-1 << " ";
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        game();        
    return 0;
}
