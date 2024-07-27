#include <bits/stdc++.h>
using namespace std;

#define ll long long int

void scale()
{
    int n,k;
    cin >> n >> k;
    int step = n/k;
    char arr[n][n];
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
            cin >> arr[i][j];
    }
    for (int i=0; i<step; i++)
    {
        int itr = k*i;
        for (int j=0; j<step; j++)
        {
            int jtr = k*j;
            cout << arr[itr][jtr];
        }
        cout << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        scale();
    return 0;
}

