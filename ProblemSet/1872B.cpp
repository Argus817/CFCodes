#include <bits/stdc++.h>
using namespace std;

int corridor()
{
    int n;
    cin >> n;
    int d[n], s[n];
    set <int> md;       //md = max distance u can go from d[i] to right s.t. u can return back
    for (int i=0; i<n; i++)
    {
        cin >> d[i] >> s[i];
        md.insert(d[i] + (s[i]-1)/2);
    }
    return *(md.begin());
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        cout << corridor() << endl;
    return 0;
}
