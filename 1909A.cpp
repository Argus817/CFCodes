#include <bits/stdc++.h>
using namespace std;

int db()
{
    int n,x1,y1,xsign=1,ysign=1;
    cin >> n;
    int x[n], y[n];
    for (int i=0; i<n; i++)
        cin>>x[i]>>y[i];
    for (int i=0; i<n; i++)
    {
        if (x[i]!=0)
        {
            x1=x[i];
            break;
        }
    }
    for (int i=0; i<n; i++)
    {
        if (y[i]!=0)
        {
            y1=y[i];
            break;
        }
    }
    for (int i=0; i<n; i++)
    {
        if (x[i]*x1<0) xsign=0;
        if (y[i]*y1<0) ysign=0;
    }
    if (xsign==0 && ysign==0) return 0;
    else return 1;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        if (db()) cout<<"YES\n";
        else cout<<"NO\n";
    }
}
