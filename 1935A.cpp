#include <bits/stdc++.h>
using namespace std;

void EntMac()
{
    int n,flag=0;
    string s;
    cin >> n;
    cin >> s;
    for (int i=0; i<(s.length()/2); i++)
    {
        if (s[i]<s[s.length()-i-1])
        {
            flag=0;
            break;
        }
        else if (s[i]>s[s.length()  -i-1])
        {
            flag=1;
            break;
        }
        else
            continue;
    }
    if (flag==0) cout << s << endl;
    else if (flag==1) 
    {
        for (int i=s.length()-1; i>=0; i--)
            cout << s[i];
        cout << s << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        EntMac();
    return 0;
}