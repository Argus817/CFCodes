#include <bits/stdc++.h>
using namespace std;

int minMoves()
{
    int n, sum=0;
    cin >> n;
    int arr[n];
    for (int i=0; i<n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    int rem = sum%3;
    if (rem==0) return 0;
    if (n==1) return 1;
    if (rem==2) return 1;
    
    for (int i=0; i<n; i++)
    {
        if (arr[i]%3==1)
            return 1;
    }
    return 2;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        cout << minMoves() << endl;
    return 0;
}