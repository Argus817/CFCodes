#include <bits/stdc++.h>
using namespace std;

int conprop()
{
    int n;
    cin >> n;
    int a[n], b[n];
    for (int i=0; i<n; i++)
        cin >> a[i];
    for (int i=0; i<n; i++)
        cin >> b[i];
    int i=n-1, j=n-1, count=0;
    while (i>=0 && j>=0)
    {
        if (a[i]<=b[j])
        {
            i--;
            j--;
        }
        else
        {
            i--;
            count++;
        }
    }
    return count;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        cout << conprop() << endl;
    return 0;
}

