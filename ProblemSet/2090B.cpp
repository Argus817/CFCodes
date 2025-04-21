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
    int n,m;
    cin >> n >> m;
    int a[n][m];
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)
        {
            char x;
            cin >> x;
            a[i][j] = x - '0';
        }
    }

    for (int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)
        {
            if (a[i][j] == 1)
            {
                int flag1 = 1;
                for (int k=0; k<i; k++)
                {
                    if (a[k][j] == 0)
                        flag1 = 0;
                }
                int flag2 = 1;
                for (int k=0; k<j; k++)
                {
                    if (a[i][k]==0)
                        flag2 = 0;
                }
                if ((flag1|flag2)==0)
                    return 0;
            }
            else
                cerr << 0 << sp;
        }
        cerr << ERREND;
    }
    return 1;
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
