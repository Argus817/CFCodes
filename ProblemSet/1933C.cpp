#include <bits/stdc++.h>
using namespace std;

int factor()
{
    int a,b,l, prod=1;
    cin >> a >> b >> l;
    set <int> kvals;
    if (a==b)
    {
        for (int i=0; 1; i++)
        {
            
            prod = pow(a,i);
            if (prod > l) break;
            if (l%prod==0) kvals.insert(l/prod);
        }
        return kvals.size();
    }
    
    for (int i=0; 1; i++)
    {
        prod = pow(a,i);
        if (prod>l) break;
        for (int j=0; 1; j++)
        {
            if (l%prod==0) kvals.insert(l/prod);
            prod = prod*b;
            if (prod>l) break;
        }
        
    }
    return kvals.size();
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        cout << factor() << endl;
    return 0;
}