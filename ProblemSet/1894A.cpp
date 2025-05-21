#include <bits/stdc++.h>
using namespace std;
char sport()
{
    int n;
    cin>>n;
    string str;
    cin>>str;
    return str[n-1];
}
int main() 
{ 
    int t;
    cin>>t;
    while (t--)
        cout<<sport()<<"\n";
    return 0; 
}
