#include <bits/stdc++.h>
using namespace std;

int probgen()
{
    int n,m,count=0;
    cin >> n >> m;
    string a;
    cin >> a;
    int arr[7] = {0};
    for (int i=0; i<n; i++) //'A' = 65
        arr[(int)a[i]-65]++;
    for (int i=0; i<7; i++)
    {
        if (arr[i]<m)
            count += m-arr[i];
    }
    return count;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        cout << probgen() << endl;    
    return 0;
}

