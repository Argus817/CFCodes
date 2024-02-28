#include <bits/stdc++.h>
using namespace std;

int makeEqual()
{
    int n, max=0, sum=0, temp=0;
    cin >> n;
    int arr[n];
    for (int i=0; i<n; i++)
    {
        cin >> arr[i];
        sum+=arr[i];
    }
    int k = sum/n;
    for (int i=0; i<n; i++)
    {
        arr[i] += temp;
        temp=0;
        if (arr[i]>=k)
            temp+=arr[i]-k;
        else return 0;
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