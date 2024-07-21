#include <bits/stdc++.h>
using namespace std;

int majority()
{
    int n,prev=1;
    cin >> n;
    vector <int> a;
    for (int i=0; i<n; i++)
    {
        char num;
        cin >> num;
        if (num!=prev || prev!='0')
        {
            if (num=='1')
                a.push_back(1);
            else
                a.push_back(0);
        }
        prev = num;
    }
    int c0=0,c1=0;
    for (int i=0; i<(int)(a.end()-a.begin()); i++)
    {
        if (a[i])
            c1++;
        else
            c0++;
    }
    return (c1>c0);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x = majority();
        if (x)
            cout << "YES\n";
        else
            cout << "NO\n";
    }        
    return 0;
}

