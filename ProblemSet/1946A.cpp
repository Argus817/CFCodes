#include <bits/stdc++.h>
using namespace std;

int med()
{
    int n,i;
    cin >> n;
    vector <int> vec;
    for (int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        vec.push_back(x);
    }
    if (n==1)
        return 1;
    sort(vec.begin(), vec.end());
    int MI = ceil((n-1)/2);
    return count(vec.begin()+MI, vec.end(), vec[MI]);
    
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        cout << med() << endl;
    return 0;
}