#include <bits/stdc++.h>
using namespace std;

#define ll long long int

ll fun()
{
    ll n,x,res=0;
    cin >> n >> x;
    ll a_limit = min((ll)((n-1)/2), x-2);
    for (ll a=1; a<=a_limit; a++)
    {
        ll b_limit = min( (ll)((n-a)/(a+1)) , x-a-1 );
        for (ll b=1; b<=b_limit; b++)
            res += min(x-a-b, (ll)((n-a*b)/(a+b)) );
    }
    return res;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        cout << fun() << endl;
    return 0;
}

