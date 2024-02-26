#include <bits/stdc++.h>
using namespace std;
int chem()
{
    int oddelem=0,n,k,i;
    cin>>n>>k;
    string s;
    cin>>s;
    int arr[26]={0};
    for (i=0; i<n; i++)
        arr[s[i]-97]++;
    for (i=0; i<26; i++)
    {
        if (arr[i]%2!=0) 
            oddelem++;
    }
    if (oddelem<=k) return 1;
    else if (oddelem-k==1) return 1;
    else return 0;
} 
int main() 
{ 
    int t;
    cin>>t;
    while (t--)
        if (chem()) cout<<"YES\n";
        else cout<<"NO\n";
    return 0;
}
