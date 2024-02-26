#include <bits/stdc++.h>
using namespace std;

void contest()
{
    int n, k;
    cin >> n >> k;
    vector<int> vec;
    for (int i=0; i<=k; i++)
        vec.push_back(n-k+i);
    for (int i=k+1; i<n; i++)
        vec.push_back(n-i);
    for (int i=0; i<n; i++)
        cout << vec[i] << " ";
    cout << "\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        contest();
    return 0;
}
