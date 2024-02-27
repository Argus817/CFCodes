#include <bits/stdc++.h>
using namespace std;

void sq()
{
    int x[4], y[4];
    for (int i=0; i<4; i++)
        cin >> x[i] >> y[i];
    for (int i=1; i<4; i++)
    {
        if (x[i]==x[0])
        {
            int side = y[i]-y[0];
            cout << side*side << endl;
            break;
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        sq();
}
