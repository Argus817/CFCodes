#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,n,l1=0,o1=0,l=0,o=0;
    cin >> n;
    string s;
    cin >> s;
    for (i=0; i<n; i++)
    {
        if (s[i]=='L') l++;
        else o++;
    }
    //cout << "L="<<l<<"\nO="<<o<<"\n";
    for (i=0; i<n; i++)
    {
        if (s[i]=='L') l1++;
        else o1++;
        //if (i==0) continue;
        if (l1!=(l-l1) && o1!=(o-o1))
            break;
    }
    //cout << "L1="<<l1<<"\nO1="<<o1<<"\n";
    if (i==n-1) cout << -1 <<"\n";
    else cout << i+1 <<"\n";
    return 0;
}
