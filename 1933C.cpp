#include <bits/stdc++.h>
using namespace std;

int factor()
{
    int a,b,l,count=0, prod=1;
    cin >> a >> b >> l;
    
    if (a==b)
    {
        for (int i=0; 1; i++)
        {
            
            prod = pow(a,i);
            if (prod > l) break;
            if (l%prod==0) count++;
        }
        return count;
    }
    
    for (int i=0; 1; i++)
    {
        prod = pow(a,i);
        if (prod>l) break;
        for (int j=0; 1; j++)
        {
            if (l%prod==0) count++;
            prod = prod*b;
            if (prod>l) break;
        }
        
    }
    return count;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        cout << factor() << endl;
    return 0;
}