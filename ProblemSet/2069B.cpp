#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#define REDIRECT freopen("error", "w", stderr);
#else 
#define REDIRECT  
#endif

#define ll long long int
#define sp ' '
#define mod(x) (((x)>0)? (x) : -(x))
#define pb push_back

int solve()
{
    int n,m, sum=0;
    cin >> n >> m;
    int a[n][m];
    map <int, int> uniq;
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < m; j++) 
        {
            cin >> a[i][j];
            uniq[a[i][j]] = 1;
        }
    }
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < m-1; j++) 
        {
            if (a[i][j] == a[i][j+1])
                uniq[a[i][j]] = 2;
        }    
    }
    for (int j = 0; j < m; j++) 
    {
        for (int i = 0; i < n-1; i++) 
        {
            if (a[i][j] == a[i+1][j])
                uniq[a[i][j]] = 2;
        }    
    }
    int flag = 0;
    int j = 0;
    for (auto i = uniq.begin(); i != uniq.end(); i++)
    {
        if (i->second == 2 && flag==0)
        {
            flag = 1;
            continue;
        }
        if (flag == 0 && j+1==uniq.size())
            break;
        sum += i->second;
        j++;
    }
    return sum;
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

    
    cout << solve() << endl;
}

int main()
{
    REDIRECT
    int t;
    cin >> t;
    while (t--) execute();
    return 0;
}
