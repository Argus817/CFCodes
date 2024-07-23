#include <bits/stdc++.h>
using namespace std;

#define ll long long int

ll easyBouquet()
{
    ll n,m;
    cin >> n >> m;
    vector <ll> a;
    for (ll i=0; i<n; i++)
    {
        ll x;
        cin >> x;
        a.push_back(x);
    }
    sort(a.begin(), a.end());
    vector <ll> num;
    vector <ll> count;
    ll x=a[0],itr=0;
    num.push_back(x);
    count.push_back(1);
    for (ll i=1; i<n; i++)
    {
        if (a[i]==num[itr])
        {
            count[itr]++;
        }
        else
        {
            itr++;
            num.push_back(a[i]);
            count.push_back(1);
        }
    }
    ll maxpet = 0;
    if ((m/num[0])<=count[0])
        maxpet = (m/num[0]) * num[0];
    else
        maxpet = count[0] * num[0];
    for (ll i=1; i<=itr; i++)
    {
        if (num[i]-num[i-1]>1)
        {
            ll currpet = 0;
            if ((m/num[i])<=count[i])
                currpet += (m/num[i]) * num[i];
            else
                currpet += count[i] * num[i];
            if (currpet > maxpet && currpet <= m)
                maxpet = currpet;
            continue;
        }

        ll currpet = 0;
        
        ll j,k;
        if (m/num[i-1] <= count[i-1])
        {
            j = m/num[i-1];
            k = 0;
        }
        else
        {
            j = count[i-1];
            ll leftover = m - (count[i-1]*num[i-1]);
            if (leftover/num[i] <= count[i])
                k = leftover/num[i];
            else
                k = count[i];
        }
        currpet = j*num[i-1] + k*num[i];
        while (k<count[i] && j>0)
        {
            k++;
            j--;
            ll newpet = j*num[i-1] + k*num[i];
            if (newpet > currpet && newpet <= m)
                currpet = newpet;

        }

        if (currpet > maxpet && currpet <= m)
            maxpet = currpet;

    }
    return maxpet;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        cout << easyBouquet() << endl;
    return 0;
}

