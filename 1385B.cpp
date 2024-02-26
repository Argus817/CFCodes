#include <bits/stdc++.h>
using namespace std;

void merger()
{
    int n;
    cin >> n;
    int arr[2*n];
    vector <int> v;
    for (int i=0; i<(2*n); i++)
        cin >> arr[i];
    for (int i=0; i<(2*n); i++)
    {
        int key = arr[i];
        if (find(v.begin(), v.end(), key) != v.end()) //element found
            continue;
        else //element not found
            v.push_back(key);
    }
    for (int i=0; i<n; i++)
        cout << v[i] << " ";
    cout << "\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--) merger();
    return 0;
}
