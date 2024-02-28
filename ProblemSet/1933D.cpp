#include <bits/stdc++.h>
using namespace std;

int gcd(int x, int y)
{
    if (y==0) 
        return x;
        
    return gcd(y,x%y);
}

int turtlemods()
{
    int n,hcf,hcfcount=0;
    cin >> n;
    int arr[n];
    for (int i=0; i<n; i++)
    {
        cin >> arr[i];
        if (i==0) hcf=arr[i];
        else hcf = gcd(hcf,arr[i]);
    }
    for (int i=0; i<n; i++)
    {
        if (arr[i]==hcf)
            hcfcount++;
    }
    if (hcfcount<2) return 1;
    else return 0;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x = turtlemods();
        if (x) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}