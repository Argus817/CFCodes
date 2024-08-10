#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define sp " "

void centre()
{
    ll xc, yc, k;
    cin >> xc >> yc >> k;
    ll i = 0;
    vector <ll> xi;
    vector <ll> yi;
    for (int i=0; i<k; i++)
    {
        if (i%2 == 0)
            xi.push_back(0);
        else
        {
            xi.push_back((i+1)/2);
            xi[i-1] = -((i+1)/2);
        }
    }
    for (int i=0; i<k; i++)
        cout << xc+xi[i] << sp << yc+xi[i] << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        centre();
    return 0;
}

