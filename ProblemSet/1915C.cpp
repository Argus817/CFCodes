#include <bits/stdc++.h>
using namespace std;
int sq()
{
    int n,i;
    long long int sum=0;
    cin>>n;
    for (i=0; i<n; i++)
    {
        long int x;
        cin>>x;
        sum+=x;
    }
    return ((int)sqrt(sum)==sqrt(sum));
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        if (sq()) cout<<"YES\n";
        else cout<<"NO\n";
    }
}
