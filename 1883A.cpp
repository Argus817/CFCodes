#include<bits/stdc++.h>
using namespace std;

void morning()
{
    string s;
    cin >> s;
    int i,count = 0, point=1;
    for (i=0; i<4; i++)
    {
    int n = s[i]-48;
    n = (n==0)? 10:n;
    count += abs(point-n)+1;
    point=n;
    }
    cout << count << "\n";
}
int main()
{
    int t;
    cin >> t;
    while(t--)
        morning();
    return 0;
}


