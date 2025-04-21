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

int solve()
{
    int n;
    cin >> n;
    char c[2][n];
    int dp[2][n]={};
    int v[2][n] = {};
    for (int i=0; i<2; i++)
    {
        for (int j=0; j<n; j++)
            cin >> c[i][j];
    }
    dp[1][n-1] = 1;
    queue <pair <int,int>> q;
    q.push(make_pair(1,n-1));
    while (!q.empty())
    {
        int i = q.front().first;
        int j = q.front().second;
        q.pop();
        if (v[i][j]==1)
            continue;

        cerr << i << sp << j << ERREND;

        v[i][j] = 1;
        int k = j-1;
        if (k<0 || c[i][k]=='<')
            continue;
        if (k>0)
        {
            q.push(make_pair(i,k-1));
            dp[i][k-1] = 1;
        }
        if (i==0) {
            q.push(make_pair(1,k));
            dp[1][k] = 1;
        }
        else {
            q.push(make_pair(0,k));
            dp[0][k] = 1;
        }
    }
    return dp[0][0];
}

void execute()
{
    
    int x = solve();
    if (x)
        cout << "YES\n";
    else 
        cout << "NO\n";
    

    /*
    solve();
    */
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
