#include <bits/stdc++.h>
using namespace std;

string rating()
{
    string s;
    cin >> s;
    int n = s.length();
    int a,b;
    
    for (int i=n-1; i>0; i--)
    {
        string a = s.substr(0,i);
        string b = s.substr(i,n-i);
        if (b[0]=='0') continue;
        if (stoi(a)<stoi(b)) 
            return (a+" "+b);
    }
    return "-1";
}

int main() 
{ 
    int t;
    cin>>t;
    while (t--)
        cout << rating() << endl;
    return 0; 
}
