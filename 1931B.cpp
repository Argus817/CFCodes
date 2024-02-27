#include <bits/stdc++.h>
using namespace std;

int makeEqual()
{
    int n, max=0;
    cin >> n;
    int arr[n];
    for (int i=0; i<n; i++)
        cin >> arr[i];
        
    if (n==1)
        return 1;
    for (int i=n-1; i>=0; i--)
    {    
        if (arr[i] > max)
        {
            int sum=0;
            for (int j=i; j<n; j++)
                sum += arr[j];
            int rem = sum%(n-i);
            for (int j=i; j<=n; j++)
            {
                arr[j] = sum/(n-i);
                if (rem>0)
                    arr[j]++;
            }
        }
        max = (max>arr[i])? max:arr[i];
    }
    for (int i=1; i<n; i++)
    {
        if (arr[i]!=arr[i-1])
            return 0;
    }
    return 1;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x = makeEqual();
        if (x) cout<<"YES\n";
        else cout<<"NO\n";
    }
}