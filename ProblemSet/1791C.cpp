#include <bits/stdc++.h>
using namespace std;

void binary()
{
    int n;
    string s;
    cin >> n >> s;
    int i=0, j=n-1;
    while(i<j)
    {
    if (s[i]==s[j]) break;
    i++;
    j--;
    }
    cout << j-i+1 << "\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--) binary();
    return 0;
}
