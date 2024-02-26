#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m;
    cin >> m;
    vector<int> vec;
    for (int i=0; i<30; i++)
        vec.push_back(0);
    while (m--)
    {
        int t,v;
        cin >> t >> v;
        if (t==1)
        {
            vec[v]++;
            continue;
        }
        vector<int> x = vec;
        for (int i=log2(v); i>=0; i--)
        {
            if (x[i]==0) 
                continue;
            int n = v/pow(2,i);
            n = (n<x[i])? n:x[i];
            x[i] -= n;
            v -= n*pow(2,i);
        }
        if (v==0) cout << "YES\n";
        else cout << "NO\n";
    }
    
}
