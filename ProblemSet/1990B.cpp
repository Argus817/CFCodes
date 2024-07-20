#include <bits/stdc++.h>
using namespace std;

#define a(i) (a[(i)-1])

void craft()
{
    int n,x,y; //4 4 3
    cin >> n >> x >> y;
    int a[n];
    for (int i=y; i<=x; i++)
        a(i) = 1;
    for (int i=1; i+x<=n; i++)
    {
        if (i%2)
            a(i+x) = -1;
        else
            a(i+x) = 1;
    }
    for (int i=1; y-i>0; i++)
    {
        if (i%2) 
            a(y-i) = -1;
        else
            a(y-i) = 1;
    }
    for (int i=0; i<n; i++)
        cout << a[i] << " ";
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        craft();
    return 0;
}

