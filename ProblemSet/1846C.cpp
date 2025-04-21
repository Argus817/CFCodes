#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#define REDIRECT freopen("error", "w", stderr);
#else 
#define REDIRECT  
#endif
#define ERREND "\n  "

#define ll long long int
#define sp ' '
#define abs(x) (((x)>0)? (x) : -(x))
#define pb push_back

ll power(ll base, ll power);
ll mod_power(ll base, ll power, ll mod);
ll mod_inv(ll n, ll prime); //prime=modulo
void QSswap(int *a, int *b);
int QSpartition(int arr[], int p, int r);
void QuickSort(int arr[], int p, int q);

struct perf {
    ll id, points, penalty;
};

void solve()
{
    ll n,m,h;
    cin >> n >> m >> h;
    perf p[n];
    for (ll i=0; i<n; i++)
    {
        ll t[m];
        for (ll j=0; j<m; j++)
            cin >> t[j];
        if (n==1)
        {
            cout << 1 << endl;
            return;
        }
        sort(t, t+m);
        ll ts[m+1] = {0}; //time from start
        for (ll j=0; j<m; j++)
        {
            ts[j+1] = ts[j] + t[j];
        } 
        p[i].id = i+1;
        p[i].penalty = 0;
        p[i].points = 0;
        ll j=1;
        while (ts[j]<=h && j<m+1)
        {
            p[i].points = j;
            p[i].penalty += ts[j];
            j++;
        }
    }
    int pos = 1; 
    for (int i=1; i<n; i++)
    {
        if (p[i].points > p[0].points)
            pos++;
        else if (p[i].points == p[0].points)
        {
            if (p[i].penalty < p[0].penalty)
                pos++;
        }
    }
    cout << pos << endl;
}

void execute()
{
    /*
    int x = solve();
    if (x)
        cout << "YES\n";
    else 
        cout << "NO\n";
    */

    
    solve();
    
}

int main()
{
    REDIRECT
    int t;
    cin >> t;
    for (int i=0; i<t; i++) 
    {
        cerr << "Test Case " << i+1 << ":" << ERREND;
        execute();
        cerr << endl;
    }
    return 0;
}

ll power(ll base, ll power)
{
    ll res = 1;
    while (power>0)
    {
        if (power & 1)
            res = res * base;
        base *= base;
        power >>= 1;
    }
    return res;
}

ll mod_power(ll base, ll power, ll mod)
{
    ll res = 1;
    while (power>0)
    {
        if (power & 1)
            res = (res * base) % mod;
        base = (base * base) % mod;
        power >>= 1;
    }
    return res;
}

ll mod_inv(ll n, ll prime) //prime=modulo
{
    return mod_power(n, prime-2, prime);
}

void QSswap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int QSpartition(int arr[], int p, int r)
{
    QSswap(arr+r, arr+(rand()%(r-p+1))+p);
    int i=p-1,x=arr[r];
    for (int j=p; j<r; j++)
    {
        if (arr[j]<=x)
        {
            i++;
            QSswap(arr+i,arr+j);
        }
    }
    QSswap(arr+i+1, arr+r);
    return i+1;
}

void QuickSort(int arr[], int p, int q)
{
    if (p<q)
    {
        int r = QSpartition(arr,p,q);
        QuickSort(arr,p,r-1);
        QuickSort(arr,r+1,q);
    }
}
