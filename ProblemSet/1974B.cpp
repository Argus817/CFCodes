#include <bits/stdc++.h>
using namespace std;

void decode()
{
    set <char> vals;
    int n;
    cin >> n;
    string s;
    cin >> s;
    for (int i=0; i<n; i++)
        vals.insert(s[i]);
    vector <char> vec;
    for (auto itr = vals.begin(); itr != vals.end(); itr++)
        vec.push_back(*itr);
    for (int i=0; i<n; i++)
    {
        int index = (int)(lower_bound(vec.begin(),vec.end(), s[i])-vec.begin());
        cout << vec[vec.size()-index-1];
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        decode();
    return 0;
}

